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
    node *p = (node *) malloc (sizeof(node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

class node* leftright(node *original, node *first, node *second)
{
    original->left = first;
    original->right = second;
}

void print (node *n)
{
    if (n != NULL)
    {
        cout<<n->data<<" ";
        print(n->left);
        print(n->right);
        
    }
    
}
int main(int argc, char const *argv[])
{
    /*node *p = (node *) malloc (sizeof(node));
    p->data = 1;
    p->left = NULL;
    p->right = NULL;

    node *p1 = (node *) malloc (sizeof(node));
    p1->data = 2;
    p1->left = NULL;
    p1->right = NULL;

    node *p2 = (node *) malloc (sizeof(node));
    p2->data = 3;
    p2->left = NULL;
    p2->right = NULL;

    p->left = p1;
    p->right = p2;*/

    node *p = createnode(1);
    node *p1 = createnode(2);
    node *p2 = createnode(3);
    node *p3 = createnode(4);
    node *p5 = createnode(5);

    leftright(p, p1, p2);
    leftright(p1, p3, p5);
    print(p);
    

    return 0;
}

