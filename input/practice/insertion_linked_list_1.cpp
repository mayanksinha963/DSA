#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;

    
};

void linkedlist (node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}

node *insertionathead (node * &head, int data)
{
    node *ptr = new node ();
    ptr->data = data;
    ptr->next = head;
    return ptr;
    
}

node *insertionatend (node *head, int data)
{
    node *ptr = new node ();
    ptr->data = data;
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

node *insertionatindex (node *head, int data, int index)
{
    node *ptr = new node ();
    ptr->data = data;
    node *p = head;
    int i = 0;
    while (i != index -1)
    {
        p = p->next;
        i++;
    }
    
    ptr->next=p->next;
    p->next = ptr;
    return head;
    
}
int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 4;
    n4->next = NULL;

    //Insertion at head
    cout<<"Insertion at head"<<endl;
    n1 = insertionathead(n1, 5);
    linkedlist(n1);
    cout<<endl;

    //Insertion at end
    cout<<"Insertion at end"<<endl;
    n1= insertionatend(n1, 6);
    linkedlist(n1);
    cout<<endl;

    //Insertion at index
    cout<<"Insetion at index"<<endl;
    n1= insertionatindex(n1, 0, 2);
    linkedlist(n1);
    cout<<endl;


    return 0;
}
