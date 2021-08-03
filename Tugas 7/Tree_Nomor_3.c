/*
Nama    : Iklima Mardiana
NIM     : 2008765

Soal :
3. Implementasikan struktur Tree dengan insert yang terorder data berikut secara berurut:
   40, 30,25, 16,7,17,5,100
 lakukan penelusuran tree nomor 3 dengan preorder, inorder dan postorder
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemen {
    struct elemen*left;
    struct elemen*right;
    int data;
} elemen;

elemen * CreateTree(int data)
{
    elemen * Tree;
    Tree = (elemen*) malloc(sizeof(elemen));
    Tree->data = data;
    Tree->right = NULL;
    Tree->left = NULL;
    return Tree;
}

void preorder (elemen *p)
{
    if (p==NULL) {
        return;
    }
    printf("%d ", p->data);
    preorder(p->left);
    preorder(p->right);
}

void inorder (elemen *p)
{
    if (p==NULL) {
        return;
    }
    inorder(p->left);
    printf("%d ", p->data);
    inorder(p->right);
}

void postorder (elemen*p)
{
    if (p==NULL) {
        return;
    }
    postorder(p->left);
    postorder(p->right);
    printf("%d ", p->data);
}

void InsertOrderData (int data, elemen ** Tree)
{
    if ((*Tree) == NULL) {
        (*Tree) =  CreateTree(data);
    } else if (data <= ((*Tree)->data)) {
        InsertOrderData(data, &((*Tree)->left));
    } else {
        InsertOrderData(data, &((*Tree)->right));
    }
}

int main()
{
    elemen * Tree=NULL;

    InsertOrderData(40,&Tree);
    InsertOrderData(30,&Tree);
    InsertOrderData(25,&Tree);
    InsertOrderData(16,&Tree);
    InsertOrderData(7,&Tree);
    InsertOrderData(17,&Tree);
    InsertOrderData(5,&Tree);
    InsertOrderData(100,&Tree);

    printf("Preorder :\n");
    preorder(Tree);
    printf("\nInorder :\n");
    inorder(Tree);
    printf("\nPostorder :\n");
    postorder(Tree);

    return 0;
}
