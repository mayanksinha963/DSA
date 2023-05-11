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
    node *n = (node *) malloc (sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

class node* leftright (node *original, node *first, node* second)
{
    original->left = first;
    original->right = second;
}

void preorder (node *n)
{
    if (n !=NULL)
    {
        
        preorder(n->left);
        preorder(n->right);
        cout<<n->data<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    node *root = createnode(4);   
    node *n2 = createnode(1);   
    node *n3 = createnode(6);   
    node *n4 = createnode(5);   
    node *n5 = createnode(2);   

    leftright(root, n2, n3);
    leftright(n2, n4, n5);
    
    preorder(root);


    return 0;
}
