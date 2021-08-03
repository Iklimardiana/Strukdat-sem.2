#include <stdio.h>
int main(){
	char data_nama [16][10]= {"Muhammad", "Rizal   ,", "Rifky ,", "Sri", "Mulky   ", "Meggy   ,", "Aulia ,", "   ", ",       ", "Andika  ,", "Tika  ,", "Gina", "Umar    ", "Ihsan   ,", "      ,", "Tika"};
	
	printf ("Daftar nama berdasarkan posisi duduk \n");
	printf ("------------------------------------\n");
	printf ("%s, %s %s %s \n", data_nama[0],data_nama[1],data_nama[2],data_nama[3]);
	printf ("%s, %s %s %s \n", data_nama[4],data_nama[5],data_nama[6],data_nama[7]);
	printf ("%s, %s %s %s \n", data_nama[8],data_nama[9],data_nama[10],data_nama[11]);
	printf ("%s, %s %s %s \n", data_nama[12],data_nama[13],data_nama[14],data_nama[15]);
	return 0;
}

