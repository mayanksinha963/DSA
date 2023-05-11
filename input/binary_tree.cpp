#include<iostream>
using namespace std;

class node 
{
    public :
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *lefttoright (node *original, node *first, node *second)
{
    original->left = first;
    original->right = second;
}

void transverse (node *root)
{
    if(root != NULL)
    {
        cout<<root->data;
    transverse(root->left);
    transverse(root->right);
    }
}

int main(int argc, char const *argv[])
{
    node* root = new node(1);
    node* r1 = new node(2);
    node* r2 = new node(3);

    lefttoright(root, r1, r2);

    transverse(root);
    return 0;
}
