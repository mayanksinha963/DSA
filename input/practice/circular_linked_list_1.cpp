#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;
    
};

node *insertionathead (node *&head, int data)
{
    node *ptr = new node ();
    ptr->data = data;
    
    node *p = head;
    while (p->next != head)
    {
        p= p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    
    
}


node *insertionatend (node *&head, int data)
{
    node *ptr = new node ();
    ptr->data = data;
    
    node *p = head;
    while (p->next != head)
    {
        p= p->next;
    }
    p->next = ptr;
    ptr->next = head;
    
    
    
}

node *insertionatindex (node *&head, int data, int index)
{
    node *ptr = new node ();
    node *p= head;
    ptr->data = data;
    int i =0;
    while (i != index -1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;


    
    
}

node *deletionathead (node *&head)
{
    node *ptr = head;
    head = head->next;
    node *p = head;
    while (p->next != ptr)
    {
        p = p->next;
    }
    p->next = head;
    
    free(ptr);
}

node *deletionatend (node *&head)
{
    node *p = head;
    node *q = head ->next;
    while (q ->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    

}

node *deletionatindex (node *&head, int index)
{
    node *p = head;
    node *q = head->next;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    
}

node *deletionbyvalue (node *&head, int data)
{
    node *p = head;
    node *q = head->next;
    while (q->data != data && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    
}


void print (node *head)
{
    node *ptr = head;
    do
    {
        cout<<ptr->data;
        ptr= ptr->next;

    } while (ptr != head);
    
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
    n4->next = n1;

    //insertionathead(n1, 0);
    //insertionatend(n1, 5);
    //insertionatindex(n1, 6, 4);

    //deletionathead(n1);
    //deletionatend(n1);
    //deletionatindex(n1, 2);
    deletionbyvalue(n1, 2);
    print(n1);
    return 0;
}
