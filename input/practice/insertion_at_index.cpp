#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
};

node *insertionatindex (node *head, int data, int index)
{
    node *ptr = new node ();
    ptr->data = data;
    node *p = new node();
    p =head;
    int i = 0;
    while (i != index -1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next= ptr;
    return head;
};

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}

int main(int argc, char const *argv[])
{
    node *head = new node ();
    node *second = new node ();
    node *third= new node ();
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next= third;

    third->data = 3;
    third->next = NULL;

    insertionatindex(head, 4, 2);
    print(head);
    return 0;
}
