#include <stdio.h>
#include <string.h>

typedef struct {
	char hari [20];
	int tanggal;
	int bulan;
	int tahun;
	} datetime;
int main()

{   //Hari kemarin
	datetime yesterday;
	strcpy (yesterday.hari, "Senin");
	yesterday.tanggal = 8;
	yesterday.bulan = 2;
	yesterday.tahun = 2021;
	printf ("Hari kemarin : %s, %d-%d-%d \n", yesterday.hari, yesterday.tanggal, yesterday.bulan, yesterday.tahun);
	
	
	//Hari sekarang
	datetime today;
	strcpy (today.hari, "Selasa");
	today.tanggal =9;
	today.bulan = 02;
	today.tahun = 2021;
	printf ("Hari ini :%s, %d-%d-%d ", today.hari, 	today.tanggal, today.bulan, today.tahun);
	printf ("\n");
	
	//Hari besok
	datetime tomorrow;
	strcpy (tomorrow.hari, "Rabu");
	tomorrow.tanggal = 10;
	tomorrow.bulan = 02;
	tomorrow.tahun = 2021;
	printf ("Hari besok :%s, %d-%d-%d", tomorrow.hari, 	tomorrow.tanggal, tomorrow.bulan, tomorrow.tahun);
	printf ("\n");
	
	return 0;
};
