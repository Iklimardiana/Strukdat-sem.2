#include <stdio.h>

int angka (int A){
	return A;
}
int main()
{
	int A, i, n=0;
	printf ("Masukkan angka : ");
	scanf ("%d", &A);
	for (i=0; i<=A; i++){
		n=n+1;
	}
	printf ("%d+1 = ", A);
	printf ("%d",n);
	A = angka(A);
	return 0;
}


	

