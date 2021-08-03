#include <stdio.h>

#define maxsize 10

typedef struct {
	int head;
	int tail;
	int data[maxsize];
}Queue;

void createQueue (Queue * Q){
	Q->head =-1;
	Q->tail =-1;
}
int isFull(Queue * Q){
	if (Q->head==0 && Q->tail==(maxsize-1))
		return 1;	
	else if((Q->head)-(Q->tail)==1)
		return 1;		
	else return 0;	
	
}
int isEmpty(Queue * Q){
	if(Q->head==-1 && Q->tail==-1)
		return 1;
	else return 0;
	
}
void enQueue(Queue * Q, int X){
	if (isFull(Q)== 0){
		if(Q->head==-1){
			Q->head = Q->head + 1;
		}
	Q->tail =(Q->tail + 1) % maxsize;
	Q->data[Q->tail] = X;		
	}
	else {
		printf ("Antrian penuh!\n");
	}
}
void DelQueue(Queue * Q){
	int datahapus;
	if (isEmpty(Q)==0){
		datahapus= Q->data[Q->head];
		printf ("Data yang dihapus = %d\n", datahapus);
		Q->data[Q->head]= Q->data[(Q->head)+1];
		if (Q->head==Q->tail){
			Q->head=-1;
			Q->tail=-1;
		}
		else {
			Q->head=(Q->head + 1) % maxsize;

		}
	}
	else {
		printf ("Data Kosong!\n");
	}	
}
void print(Queue * Q){
	if (Q->head != -1 && Q->tail != -1){
		int i;
		for (i=Q->head; i<=Q->tail; i++){
			printf ("Data= %d\n", Q->data[i]);
		}
	}
	else {
		printf ("Antrian Kosong!\n");
	}

}

int main (){
	Queue antrian;
	createQueue (&antrian);

	enQueue(&antrian,21);
	enQueue(&antrian,32);
	enQueue(&antrian,11);
	enQueue(&antrian,12);
	print (&antrian);
	printf ("\n");
	DelQueue(&antrian);
	printf("\n");
	printf ("sisa data :\n");
	print(&antrian);
	DelQueue(&antrian);
	printf ("\n");
	printf ("sisa data :\n");
	print(&antrian);
	printf ("\n");
	printf("Data ditambahkan:\n");
	enQueue (&antrian, 90);
	enQueue (&antrian, 91);
	enQueue (&antrian, 91);
	enQueue (&antrian, 91);
	enQueue (&antrian, 91);
	enQueue (&antrian, 91);
	print(&antrian);
	return 0;
}
	
