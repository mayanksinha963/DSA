#include<iostream>
using namespace std;

class node {
    public :
    int data;
    int height;
    node *left;
    node *right;
};

int gettingheight (node *n)
{
    if (n == NULL)
    {
        return 0;
    }

    return n->height;
    
}

node *creatingnode (int data)
{
    node *n = (node *)malloc (sizeof(node));
    n->data = data;
    n->height = 1;
    n->left = NULL;
    n->right = NULL;
}

int balancefactor (node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    
    return gettingheight(n->left) - gettingheight (n->right);
}

node *leftrotate (node *x)
{
    node *y = x->right;
    node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(gettingheight(y->left), gettingheight(y->right)) + 1;
    x->height = max(gettingheight(x->left), gettingheight(x->right)) + 1;

    return y;

}

node *rightrotate (node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(gettingheight(x->left), gettingheight(x->right)) + 1;
    y->height = max(gettingheight(y->left), gettingheight(y->right)) + 1;

    return x;
}

node *insertion (node *n, int data)
{
    if (n == NULL)
    {
        return creatingnode(data);
    }
    if (n->data > data)
    {
        n->left = insertion(n->left, data);
    }
    else {
        n->right = insertion(n->right, data);
    }
    
    n->height = max(gettingheight(n->left), gettingheight(n->right)) + 1;
    
    int bf = balancefactor(n);
    if (bf > 1 && data < n->left->data)
    {
        return rightrotate(n);
    }
    if (bf < -1 && data > n->right->data)
    {
        return leftrotate(n);
    }

    if (bf > 1 && data > n->left->data)
    {
        n->left = leftrotate(n->left);
        return rightrotate(n);
    }
    if (bf < -1 && data < n->right->data)
    {
        n->right = rightrotate(n->right);
        return leftrotate(n);
    }

    return n;
    
}

void preorder (node *n)
{
    if (n != NULL)
    {
        cout<<n->data<<" ";
        preorder(n->left);
        preorder(n->right);
    }
    
}

int main(int argc, char const *argv[])
{
    node *n = NULL;
    n = insertion(n, 1);
    n = insertion(n, 2);
    n = insertion(n, 3);
    n = insertion(n, 4);
    n = insertion(n, 5);
    preorder(n);
    return 0;
}
