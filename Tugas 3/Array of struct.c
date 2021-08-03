#include <stdio.h>

typedef struct{
	int x;
	int y;
}Titik;

typedef struct{
	Titik titik[50];
}Bidang;

int main(){
	Bidang BIDANG[2];
	int a; //Jumlah titik
	int b;
	int c;
	int d;
	int e;
	for (b=0; b<2; b++){
		printf ("Bidang ke-%d :\n",b+1);
		printf ("Masukkan jumlah titik pada bidang ke-%d : ",b+1);
		scanf ("%d", &a);
		printf ("Jumlah titik pada bidang ke-%d adalah %d\n",b+1,a);
		
		for (c=0; c<a; c++){
			printf("Masukkan nilai koordinat X : ");
			scanf ("%d", &BIDANG[b].titik[c].x);
			printf("Masukkan nilai koordinat Y : ");
			scanf ("%d", &BIDANG[b].titik[c].y);
		}
		 printf("Bidang ke-%d\n", b+1);
        for(d=0; d<a; d++){
            printf("Titik ke %d adalah (%d,%d)\n", d+1, BIDANG[b].titik[d].x, BIDANG[b].titik[d].y);
        }
	}
	return 0;
}
