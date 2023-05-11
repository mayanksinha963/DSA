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
    node *p = (node *) malloc (sizeof(node));
    p->data = data;
    p->left= NULL;
    p->right = NULL;
    return p;
}

class node* leftright (node *original, node *first, node *second)
{
    original->left= first;
    original->right = second;

}

void print (node *n)
{
    if (n != NULL)
    {
        cout<<n->data<<" ";
        print(n->left);
        print(n->right);
    }
    
}
int main(int argc, char const *argv[])
{
    node* root = createnode(1);   
    node* p2 = createnode(2);   
    node* p3 = createnode(3);   

    leftright(root, p2, p3);
    print(root);
    return 0;
}
