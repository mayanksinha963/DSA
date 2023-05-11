#include<iostream>
using namespace std;

class node 
{
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

node *createbst (node *&root, int data)
{
    if (root == NULL)
    {
        root = new node (data);
        return root;
    }

    if (root->data < data)
    {
        createbst(root->right, data);
    }

    if(root->data > data)
    {
        createbst(root->left, data);
    }

    return root;
    
    
}

void bst (node *&root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    while (data != -1)
    {
        createbst(root, data);
        cin>>data;
    }
    

}

void findPreSuc(node* &root, node *&pre, node* &suc, int key)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data == key)
    {
        
        if(root->left)
        {
            node *temp = root->left;
            while (temp->right)
            {
                temp = temp->right;
            }
            pre = temp;   
        }

        if (root->right)
        {
            node *temp = root->right;
            while (temp->left)
            {
                temp = temp->left;
            }

            suc = temp;
            
        }
        
    }
    if (root->data < key)
    {
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
    else
    {
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    }
    

    
    
    
}

int main(int argc, char const *argv[])
{
    node *pre = NULL;
    node *suc = NULL;
    node *root = NULL;
    int key = 65 ;
    bst (root);
    findPreSuc(root, pre, suc, key);
    cout<<pre->data<<" "<<suc->data<<endl;

    return 0;
}
