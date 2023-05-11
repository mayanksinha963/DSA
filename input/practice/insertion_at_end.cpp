#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;
};

void transverselinkedlist (node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr= ptr->next;
    }
    
}

node *insertatend(node *head, int data)
{
    node *ptr = new node ();
    ptr->data= data;
    node *p = head;
    while(p->next != NULL)
    {
       p= p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = NULL;

    n1 = insertatend(n1, 4);
    transverselinkedlist(n1);
    return 0;
}
