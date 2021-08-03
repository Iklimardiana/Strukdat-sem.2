/*
Nama    : Iklima Mardiana
NIM     : 2008765 

Soal :
1. Mengimplementasikan struktur tree yang ditugaskan pada pertemuan sebelumnya dengan menggunakan bahasa Tree.
2. Lakukan penelusuran inorder, preorder dan postorder.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemen {
    struct elemen*left;
    struct elemen*right;
    char Data[1];
} node;

node * CreateTree(char Data[1])
{
    node * tree;
    tree = (node*) malloc(sizeof(node));
    strcpy(tree->Data,Data);
    tree->right = NULL;
    tree->left = NULL;
    return tree;
}

void preorder (node *p)
{
    if (p==NULL) return;
    printf("%s ", p->Data);
    preorder(p->left);
    preorder(p->right);
}

void inorder (node *p)
{
    if (p==NULL) return;
    inorder(p->left);
    printf("%s ", p->Data);
    inorder(p->right);
}

void postorder (node*p)
{
    if (p==NULL) return;
    postorder(p->left);
    postorder(p->right);
    printf("%s ", p->Data);
}

int main()
{
    node * tree = NULL;
    tree = CreateTree("A");

    node * Subtree_Left;    
    Subtree_Left = CreateTree("B");
    tree->left = Subtree_Left;

    node * Subtree_Right;
    Subtree_Right = CreateTree("E");
    tree->right = Subtree_Right;

    node * Subtree_Left_Left;
    Subtree_Left_Left = CreateTree("C");
    tree->left->left = Subtree_Left_Left;

    node * Subtree_Left_Right;
    Subtree_Left_Right = CreateTree("D");
    tree->left->right = Subtree_Left_Right;

    node * Subtree_Right_Left;
    Subtree_Right_Left = CreateTree("F");
    tree->right->left = Subtree_Right_Left;

    node * Subtree_Right_Right;
    Subtree_Right_Right = CreateTree("H");
    tree->right->right = Subtree_Right_Right;

    node * Subtree_Right_Left_Left;
    Subtree_Right_Left_Left = CreateTree("G");
    tree->right->left->left = Subtree_Right_Left_Left;

    node * Subtree_Right_Right_Left;
    Subtree_Right_Right_Left = CreateTree("I");
    tree->right->right->left = Subtree_Right_Right_Left;

    node * Subtree_Right_Right_Right;
    Subtree_Right_Right_Right = CreateTree("J");
    tree->right->right->right = Subtree_Right_Right_Right;

    printf("Preorder :\n");
    preorder(tree);
    printf("\nInorder :\n");
    inorder(tree);
    printf("\nPostorder :\n");
    postorder(tree);

    return 0;
}
