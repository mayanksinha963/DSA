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
    p->data= data;
    p->left = NULL;
    p->right = NULL;
}

class node *leftright (node *original, node *first, node *second)
{
    original->left = first;
    original->right = second;
}

class node *insertion (node *root, int key)
{
    node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            cout<<"Insertion is not possible "<<endl;
            return root;
        }
        else if(root->data >key)
        {
            root = root->left;
        }
        else {
            root = root->right;
        }
        
    }

    node *n1 = createnode(key);
    if (prev->data >key)
    {
        prev->left = n1;
    }
    else {
        prev ->right = n1;
    }
    
    
}

class node *print (node *root)
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
    node *p2= createnode(3);
    node *p3= createnode(6);
    node *p4 = createnode(1);
    node *p5= createnode (4);

    leftright(root, p2,p3);
    leftright(p2, p4, p5);

    insertion(root, 2);
    print(root);
    return 0;
}
