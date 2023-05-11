#include<iostream>
#include<stdlib.h>

using namespace std;

class node {
    public :
    int data;
    node *left;
    node *right;
};


class node* createnode (int data)
{
    node* p = (node *) malloc (sizeof(node));
    p->data= data;
    p->left= NULL;
    p->right= NULL;
}

class node* leftright (node *original, node* first, node* second)
{
    original->left= first;
    original->right= second;
}

int  binarysearch (node *root)
{
    static node *prev= NULL;
    if (root != NULL)
    {
        if (!binarysearch(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return (binarysearch(root->right));
    }
    else {
        return 1;
    }
    
}

void print (node *root)
{
    if (root != NULL)
    {
        print(root->left);
        cout<<root->data;
        print(root->right);
    }
    
}



int main(int argc, char const *argv[])
{
    node *root = createnode(5);
    node *p1 = createnode(3);
    node *p2 = createnode(6);
    node *p3 = createnode(1);
    node *p4 = createnode(4);

    leftright(root,p1,p2);
    leftright(p1,p3,p4);
    cout<<binarysearch(root);
    return 0;
}
