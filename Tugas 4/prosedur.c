#include <stdio.h>


void angka (int A){
	if (A%2==0) {
		printf ("Bilangan genap ");
	}else{
		printf("Bilagan ganjil ");
	}
}

int main(){
	int A;
	printf ("Masukkan angka : ");
	scanf ("%d", &A);
	angka (A);
	return 0;
}
