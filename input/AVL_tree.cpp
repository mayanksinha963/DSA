#include<iostream>
#include<stdlib.h>

using namespace std;

class node {
    public :
    int data;
    node *left;
    node *right;
    int height;
};

int gettingheight (node *n)
{
    
    if (n == NULL)
    {
        return 0;   
    }
    return n->height;
    
}

node *createnode (int data)
{
    node *n = (node *) malloc (sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}

// node *leftright (node *original, node *first, node *second)
// {
//     original->left = first;
//     original->right = second;
// }

int getbalancefactor (node *n)
{
    if (n == NULL)
    {
        return 0;
    }

    
        return gettingheight(n->left) - gettingheight (n->right);
    
    
}

node *rightrotate (node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(gettingheight(x->right), gettingheight(x->left)) +1;
    y->height = max(gettingheight(y->right), gettingheight(y->left)) +1;

    return x;
}

node *leftrotate (node *x)
{
    node *y = x->right;
    node *T2 = y->left;

    y->left= x;
    x->right = T2;

    x->height = max(gettingheight(x->left), gettingheight(x->right)) + 1;
    y->height = max(gettingheight(y->left), gettingheight(y->right)) + 1;

    return y;
}

node *insert (node *root, int data)
{
    
    if (root == NULL)
    {
     
        return createnode(data);
    }
    if (data < root->data)
    {
       
        root->left = insert(root->left, data);
    }
    else {
        
        root->right = insert(root->right, data);
    }
    
    root->height = 1 + max(gettingheight(root->left), gettingheight(root->right)) ;
   
    
    int bf = getbalancefactor(root);
      

    if (bf > 1 && data < root->left->data)
    {
        
        return rightrotate(root);
    }
    
    if (bf < -1 && data > root->right->data)
    {
      
        return leftrotate(root);
    }
    
    if (bf > 1 && data > root->left->data)  
    {
       
        root->left = leftrotate(root->left);
        return rightrotate(root);
    }

    if (bf < -1 && data < root->right->data)
    {
        
        root->right = rightrotate(root->right);
        return leftrotate(root);
    }
    

    return root;
    
}

void preorder (node *root)
{
    if (root != NULL)
    {
        
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);    
        }
    
}
int main(int argc, char const *argv[])
{
     node * root = NULL;
 
 
    node *root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 7);
    preorder(root);
    
    return 0;
}
