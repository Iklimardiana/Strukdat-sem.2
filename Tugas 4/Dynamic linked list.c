//Bismillaah Iklima pasti bisa

#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct element{
	int id;
	char nama [50];
	long int harga;
	struct element *nextAlamat;
}element;

// membuat element
element* membuat_element(int id, char nama[50], long int harga){
	element *elementbaru = NULL;
	elementbaru = (element*) malloc(sizeof(element));
	elementbaru->id = id;
	strcpy(elementbaru->nama, nama);
	elementbaru->harga = harga;
	elementbaru->nextAlamat = NULL;
	return elementbaru;
}

//Membuat Add First
void addfirst(element**mylist, int id, char nama[50], long int harga){
	element*elementbaru = membuat_element(id, nama, harga);
	elementbaru->nextAlamat = (*mylist);
	(*mylist) = elementbaru;
}

//membuat add after/tengah
void addAfter(element* mylist, int id, char nama[50], long int harga, int prev){
	element* elementbaru = membuat_element (id, nama, harga);
	element* after = NULL;
	after = (mylist);
	while (after->id != prev){
		after = after->nextAlamat;
	}
	elementbaru->nextAlamat= after->nextAlamat;
	after->nextAlamat = elementbaru;
	elementbaru = NULL;
}

//membuat add akhir
void addLast(element* mylist, int id, char nama[50], long int harga){
	element* elementbaru= membuat_element (id, nama, harga);
	element* last = NULL;
	last = (mylist);
	while (last->nextAlamat !=NULL){
		last = last->nextAlamat;
	}
	last->nextAlamat=elementbaru;
	elementbaru = NULL;
}

void print (element* mylist){
	while (mylist!=NULL){
		printf ("produk %d \n", mylist->id);
		printf ("%s \n", mylist->nama);
		printf ("%d \n", mylist->harga);
		mylist = mylist->nextAlamat;
	}
}

int main(){
	element * Produk = NULL;
	
	printf("List Produk Toko: \n");
	addfirst(&Produk, 8, "Mie Instan", 3200);

	print(Produk);
	return 0;
}




