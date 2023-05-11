#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;

};

void print (node* ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}

node *reverselinkedlist (node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *head1 = reverselinkedlist(head->next);
    head->next->next= head;
    head->next = NULL;
    
    return head1;


    
}

int main(int argc, char const *argv[])
{
    node *n1 = new node ();
    node *n2 = new node ();
    node *n3 = new node ();
    node *n4 = new node ();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 4;
    n4->next = NULL;

    n1= reverselinkedlist(n1);
    print(n1);
    return 0;
}
