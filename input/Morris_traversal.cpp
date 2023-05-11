#include<iostream>
using namespace std;

class node 
{
    public :
    int data;
    node* left;
    node* right;

    node (int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *createbst (node *&root, int data)
{
    if (root == NULL)
    {
        root = new node (data);
        return root;
    }

    if (root->data > data)
    {
        createbst(root->left, data);
        return root;
    }
    if(root->data < data)
    {
        createbst(root->right, data);
        return root;
    }
    
    
}

void bst (node *&root)
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    while (data != -1)
    {
        createbst(root, data);
        cin>>data;
    }
    
}

void morristraversal (node* root)
{
    node* curr = root;
    while (curr != NULL)
    {
        
        if (curr->left == NULL)
        {
            cout<<curr->data<<" ";
            curr = curr->right;
        }
        else
        {
            node *prev = curr->left;
            while (prev->right != NULL && prev->right != curr)
            {
                prev = prev->right;
            }

            if (prev->right == NULL)
            {
                prev->right = curr;
                curr= curr->left;
            }
            else
            {
                prev->right = NULL;
                cout<<curr->data<<" ";
                curr = curr->right;
            }
            
            
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    node* root = NULL;
    bst(root);
    morristraversal(root);
    return 0;
}
