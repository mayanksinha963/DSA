#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *left;
    node *right;

    node (int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *buildtree (node *root)
{
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new node (data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter the data for inserting in left of  "<<data<<endl;
    root->left = buildtree (root->left);

    cout<<"Enter the data for inserting in right of "<<data<<endl;
    root->right = buildtree(root->right);
}

void inordertransverse (node *root)
{
    if (root == NULL)
    {
        return;
    }
    inordertransverse(root->left);
    cout<<root->data<<" ";
    inordertransverse(root->right);
    
}

void preordertransverse (node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preordertransverse(root->left);
    preordertransverse(root->right);
    
}

void postordertransverse(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postordertransverse(root->left);
    postordertransverse(root->right);
    cout<<root->data<<" ";
    
}


int main(int argc, char const *argv[])
{
    node *root = NULL;
    root = buildtree(root);
    inordertransverse(root);
    cout<<endl;
    preordertransverse(root);
    cout<<endl;
    postordertransverse(root);
    return 0;
}
