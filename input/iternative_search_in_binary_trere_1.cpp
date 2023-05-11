#include<iostream>
#include<stdlib.h>

using namespace std;

class node {
    public :
    int data;
    node *left;
    node *right;
};

class node *createnode (int data)
{
    node *p = (node *) malloc (sizeof(node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
}

class node *leftright (node *original, node *first, node *second)
{
    original->left = first;
    original->right = second;
}

class node *iter (node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (root->data > key)
        {
            root= root->left;
        }
        else {
            root = root->right;
        }
        
        
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    node* root = createnode (5);
    node *p2 = createnode(3);
    node *p3 = createnode(6);

    node *p5 = createnode(1);
    node *p6 = createnode(4);

    leftright(root, p2, p3);
    leftright(p2, p5, p6);

    node *n = iter(root, 1);

    if (n == NULL  )
    {
        cout<<"Element is not found"<<endl;
    }
    else {
        cout<<"Element is found "<<n->data<<endl;
    }
    
    return 0;
}
