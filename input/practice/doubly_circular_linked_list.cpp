#include<iostream>
using namespace std;
class node {
    public :
    int data; 
    node *next;
    node *prev;
};

node *insertionathead (node *&head, int data)
{
    node *ptr = new node ();
    ptr->data = data;
    ptr->next = head;
    ptr->prev = head->prev;
    head->prev->next= ptr;
    head->prev = ptr;
    head= ptr;
    return ptr;
}

node *insertionatend (node *&tail, int data)
{
    node *ptr = new node ();
    ptr ->data = data;
    ptr->next = tail->next;
    ptr->prev = tail;
    tail->next->prev = ptr;
    tail->next = ptr;

    
}

node *deletionathead (node *&head)
{
    node *p = head;
    head->prev->next = head->next;
    head->next->prev = head->prev;
    head= head->next;
    free(p);

}

node *deletionatend (node *&tail)
{
    node *p = tail;
    tail->next->prev = tail->prev;
    tail->prev->next = tail->next;
    tail= tail->prev;
}



void forward (node *head)
{
    node *ptr = head;
    do
    {
        cout<<ptr->data;
        ptr= ptr->next;
    } while (ptr != head);
    
    
}

void backward (node *tail)
{
    node *ptr = tail;
    do
    {
        cout<<ptr->data;
        ptr= ptr->prev;
    } while (ptr != tail);
    
}





int main(int argc, char const *argv[])
{
    node *n1 = new node ();
    node *n2 = new node ();
    node *n3 = new node ();
    node *n4 = new node ();

    n1->data = 1;
    n1->next = n2;
    n1->prev = n4;

    n2->data = 2;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 3;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 4;
    n4->next = n1;
    n4->prev = n3;


    //insertionathead(n1, 0);
    //insertionatend(n4,5);

    //deletionathead(n1);
    deletionatend(n4);
    forward(n1);
    cout<<endl;
    backward(n4);
    
    return 0;
}
