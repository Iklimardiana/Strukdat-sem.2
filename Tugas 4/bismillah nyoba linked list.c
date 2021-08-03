#include <stdio.h>
#include <malloc.h>
#include <string.h>
typedef struct element{
	int ID;
	char Produk [20];
	long int harga;
	struct element * next;
}element;

element *createElement (int ID, char produk [], long int harga){
		element *new = NULL;
		new = (element*) malloc (sizeof(element));
		new -> ID = ID;
		strcpy(new -> Produk, produk);
		new -> harga = harga;
		new -> next = NULL;
		return new;
	}

void addFirst (element ** myList, int ID, char produk[], long int harga){
	element *new = createElement (ID, produk, harga);
	new -> next = (*myList);
	(*myList) = new;
}

void addMidle (element * myList, int ID, char produk[], long int harga, int prev){
	element * new = createElement (ID, produk, harga);
	element *temp = NULL;
	temp = myList;
	while (temp -> ID != prev){
		temp = temp -> next;
	}
	new -> next = temp ->next;
	temp -> next = new;
	new = NULL;
}

void addLast (element * myList, int ID, char produk[], long int harga){
	element * new = createElement (ID, produk, harga);
	element *temp = NULL;
	temp = myList;
	while (temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = new;
	new -> next = NULL;
}

void print (element *myList){
	while (myList != NULL){
		printf ("produk %d \n", myList -> ID);
		printf ("%s \n", myList -> Produk);
		printf ("%d \n", myList -> harga);
		myList = myList -> next;
	}
}

int main(){
	element * Produk = NULL;
	
	printf("List Produk Toko: \n");
	addFirst (&Produk, 6, "Mie instan", 2000);
	addLast (Produk, 10, "Bakso", 3000);
	addFirst (&Produk, 7, "Sawi", 500);
	addMidle (Produk, 9, "Tahu", 2000, 7);
	addMidle (Produk, 8, "Nasi goreng", 800, 6);
    
	print(Produk);
	return 0;
}
