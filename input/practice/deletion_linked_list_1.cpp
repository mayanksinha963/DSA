#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;
};

void print (node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}


node *deleteathead (node *&head)
{
    node *ptr = new node ();
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

node *deleteatend(node *&head)
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
        
    }
    p->next = q->next;
    free(q);
    return head;
    
};

node *deleteatposition (node *&head, int index)
{
    node *p = head;
    node *q = head->next;
    int i =0;
    while (i != index -1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
    
}

node *deleteatvalue (node * &head, int data)
{
    node *p = head;
    node *q = head->next;
    int i;
    while (q->data != data && q->next != NULL)
    {
     p = p->next;
     q = q->next;   
    }

    if (q->data == data)
    {
        p->next = q->next;
        free(q);
    }
    
    
    return head;
}


int main(int argc, char const *argv[])
{
    node *head = new node ();
    node *second = new node ();
    node *third = new node ();
    node *forth = new node ();
    head->data = 1;
    head->next = second;

    second ->data = 2;
    second ->next = third;

    third ->data = 3;
    third ->next = forth;

    forth->data = 4;
    forth->next = NULL;

    //deleteathead(head);
    //deleteatend(head);
    //deleteatposition(head, 1);
    deleteatvalue(head, 2);
    print(head);
    return 0;
}
