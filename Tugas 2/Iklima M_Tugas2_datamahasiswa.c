#include <stdio.h>
#include <string.h>


typedef struct{
	int NIM;
	char nama [30];
	int usia;
	char kelas [100];			
	}Data;
	
int main (){
	Data mahasiswa1, mahasiswa2, mahasiswa3;	
	
	//nama 1
	printf("=====================\n");
	printf("Data mahasiswa 1 \n");
	printf("=====================\n");
	printf("Masukkan Nama mahasiswa 1 (Anda) = ");
	scanf("%[^\n]s",&mahasiswa1.nama);
	printf("Masukkan NIM = ");
	scanf("%d", &mahasiswa1.NIM);
	printf("Masukkan kelas = ");
	scanf("%s", &mahasiswa1.kelas);
	printf("Masukkan Usia =");
	scanf("%d", &mahasiswa1.usia);
	printf("\n");
	
	//nama 2
	printf("=====================\n");
	printf("Data mahasiswa 2 \n");
	printf("=====================\n");
	printf("Masukkan Nama mahasiswa 2 = ");
	scanf(" %[^\n]s",&mahasiswa2.nama);
	printf("Masukkan NIM = ");
	scanf("%d", &mahasiswa2.NIM);
	printf("Masukkan kelas = ");
	scanf("%s", &mahasiswa2.kelas);
	printf("Masukkan Usia =");
	scanf("%d", &mahasiswa2.usia);
	printf("\n");
	
	//nama 3
	printf("=====================\n");
	printf("Data mahasiswa 3 \n");
	printf("=====================\n");	
	printf("Masukkan Nama mahasiswa 3 = ");
	scanf(" %[^\n]s",&mahasiswa3.nama);
	printf("Masukkan NIM = ");
	scanf("%d", &mahasiswa3.NIM);
	printf("Masukkan kelas = ");
	scanf("%s", &mahasiswa3.kelas);
	printf("Masukkan Usia =");
	scanf("%d", &mahasiswa3.usia);
	printf("------------------------------\n");
	printf("\n");
	
	printf("================================\n");
	printf("Data mahasiswa 1, 2, dan 3 : \n");
	printf("===============================\n");
	printf("\n");
	printf("Nama mahasiswa 1 : %s \n", mahasiswa1.nama);
	printf("NIM : %d \n",mahasiswa1.NIM);
	printf("Kelas : %s \n",mahasiswa1.kelas);
	printf("Usia : %d \n", mahasiswa1.usia);
	printf("\n");

	printf("Nama mahasiswa 2 : %s \n", mahasiswa2.nama);
	printf("NIM : %d \n",mahasiswa2.NIM);
	printf("Kelas : %s \n",mahasiswa2.kelas);
	printf("Usia : %d \n", mahasiswa2.usia);
	printf("\n");
	
	printf("Nama mahasiswa 3 : %s \n", mahasiswa3.nama);
	printf("NIM : %d \n",mahasiswa3.NIM);
	printf("Kelas : %s \n",mahasiswa3.kelas);
	printf("Usia : %d \n", mahasiswa3.usia);
	printf("\n");
	
	return 0;
}
