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
    node *p = (node *)malloc (sizeof(node));
    p->data = data;
    p->left= NULL;
    p->right = NULL;
}

class node *leftright(node *original, node* first, node* second)
{
    original->left = first;
    original->right= second;
}

class node * search (node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    
    if (key == root->data)
    {
        return root;
    }

    else if (root->data >key)
    {
        search(root->left, key);
    }
    else {
        search(root->right, key);
    }
    
}

int main(int argc, char const *argv[])
{
    node *root = createnode(5);
    node *p1 = createnode(3);
    node *p2 = createnode(6);
    node *p3 = createnode(1);
    node *p4 = createnode(4);

    leftright(root, p1, p2);
    leftright(p1,p3,p4);
    node *n = search(root, 3);

    if (n != NULL)
    {
        cout<<"Element is  found "<<n->data<<endl;
    }

    else {
        cout<<"Element is not found "<<endl;
    }
    
    return 0;
}
