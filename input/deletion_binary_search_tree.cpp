#include<iostream>
#include<stdlib.h>

using namespace std;

class node {
    public :
    int data;
    node * left;
    node *right;
};

node *createnode (int data)
{
    node *p = (node *)malloc(sizeof(node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
}

node *leftright (node *original, node* first, node* second)
{
    original->left= first;
    original->right= second;
}

node *inOrderPredecessor (node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
    
}
node *deletion (node *root, int value)
{
    
    node *ipre = (node *)malloc(sizeof(node));
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL & root->right == NULL)
    {
        free(root);
        return  NULL;
    }

    if(value<root->data)
    {
       root->left = deletion(root->left, value);
    }
    else if (value>root->data)
    {
        root->right = deletion(root->right, value);
    }
    else{
         ipre = inOrderPredecessor(root);
         root->data = ipre->data;
         root->left = deletion(root->left, ipre->data);
    }
    
   return root; 
}

void print (node *root)
{
    if (root != NULL)
    {
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);
    }
    
}

int main(int argc, char const *argv[])
{
    node *root = createnode(5);
    node *p2 = createnode (3);
    node *p3 = createnode (6);
    node *p4 = createnode (1);
    node *p5 = createnode (4);
    node *p6 = createnode (7);
    node *p7 = createnode (8);

    leftright(root, p2, p3);
    leftright(p2, p4, p5);
    leftright(p4, p6, p7);

    print(root);
    cout<<endl;
    deletion(root, 1);
    print(root);

    return 0;
}
