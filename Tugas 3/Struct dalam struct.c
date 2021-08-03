#include <stdio.h>

typedef struct {
	int x;
	int y;
}TITIK;
typedef struct {
	TITIK awal;
	TITIK akhir;
}GARIS;

int main ()
{
	GARIS  garis [3];
	int m;
	int n;
	for (m=0 ; m<3; m++)
	{
		printf("==============\n");
		printf ("Garis ke-%d\n",m+1);
		printf("==============\n");
		
		printf("Masukkan X1 : ");
        scanf("%d",&garis[m].awal.x);
		
		printf ("Masukkan Y1 : ");
		scanf ("%d", &garis[m].awal.y);
		
		printf ("Masukkan X2 : ");
		scanf ("%d", &garis[m].akhir.x);
		
		printf ("Masukkan Y2 : ");
		scanf ("%d", &garis[m].akhir.y);	
	}
	
	printf("\n");
	for (n=0; n<3; n++)
		{
			printf ("==========================================================\n");
			printf("Garis ke-%d dengan X1,Y1 (%d,%d) dan X2,Y2 (%d,%d)\n", n+1, garis[n].awal.x, garis[n].awal.y, garis[n].akhir.x, garis[n].akhir.y);
		}
		printf ("==========================================================\n");
	return 0;
}

