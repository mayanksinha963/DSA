#include<iostream>
#include<stdlib.h>

using namespace std;

class node {
    public :
    int data;
    node *left;
    node *right;
};

class node* createnode (int data)
{
    node *p = (node *)malloc(sizeof(node));
    p->data= data;
    p->left = NULL;
    p->right = NULL;

    return p;
}

class node* leftright (node *original, node *first, node *second)
{
    original->left= first;
    original->right = second;
}

void inorder (node *n)
{
    if (n !=NULL)
    {
        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }
    
}
int main(int argc, char const *argv[])
{
    node *root= createnode(4);
    node *p2= createnode(1);
    node *p3= createnode(6);
    node *p4= createnode(5);
    node *p5= createnode(2);

    leftright(root, p2, p3);
    leftright(p2, p4, p5);

    inorder(root);

    return 0;
}
