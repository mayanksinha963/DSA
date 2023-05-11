#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

void forward(node *ptr)
{
    cout << "Foward" << endl;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}

void backward(node *ptr)
{
    cout << "Backward" << endl;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->prev;
    }
}

node *insertionathead(node *&head, int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = head;
    head->prev = ptr;
    ptr->prev = NULL;
    head = ptr;
}

node *insertionatend(node *&head, int data)
{
    node *ptr = new node();
    node *p = head;
    ptr->data = data;
    p->next = ptr;
    ptr->prev = p;
    // p = ptr->prev;
    ptr->next = NULL;
    head = ptr;
}

node *insertionatindex(node *&head, int data, int index)
{
    node *ptr = new node();
    int i = 0;
    node *p = head;
    while (i != index - 1)
    {
        i++;
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    p->next->next->prev = ptr;

    ptr->prev = p;

    //   ptr->next=p->next;
    // p->next = ptr;
}

node *deletionathead(node *&head)
{
    node *ptr = head;
    head = head->next;
    head->prev = NULL;
    free(ptr);
};

node *deletionatend(node *&head)
{
    node *p = head;
    head = head->prev;
    head->next = NULL;

    free(p);
};

node *deletionatindex(node *&head, int index)
{
    node *p = head;
    node *q = head->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    q->next->prev = p;
    p->next = q->next;

    free(q);
}

node *deletionatvalue(node *&head, int data)
{
    node *p = head;
    node *q = head->next;
    while (q->data != data && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data = data)
    {
        q->next->prev = p;
        p->next = q->next;

        free(q);
    }
}
int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();

    n1->data = 1;
    n1->next = n2;
    n1->prev = NULL;

    n2->data = 2;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 3;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 4;
    n4->next = NULL;
    n4->prev = n3;

    // insertionathead(n1, 0);
    // insertionatend(n4, 5);
    // insertionatindex(n1, 6, 2);

    // deletionathead(n1);
    // deletionatend(n4);
    //deletionatindex(n1, 2);
    deletionatvalue(n1, 2);

    forward(n1);
    cout << endl;
    backward(n4);
    return 0;
}
