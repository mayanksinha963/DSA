#include<iostream>
using namespace std;
class queue *f = NULL;
class queue *r = NULL;
class queue {
    public :
    int data;
    // int *f = NULL;
    // int *r = NULL;
    queue *next;
};

void linkedlistransversal (queue *ptr)
{
    cout<<"Printing the element of linked list : "<<endl;
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
}

void enqueue (int value)
{
    queue *n = (queue *)malloc (sizeof(queue));
    n->data = value;
    n->next = NULL;
    if (r == NULL)
    {
        f = r = n;
    }
    else {
        r->next = n;
        r = n;
    }
}

int dequeue ()
{
    int value = -1;
    queue *n = f;
    if (f == NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else {
        f = f->next;
        value = n->data;
        free(n);
    }
    return value;
}

int main(int argc, char const *argv[])
{

    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    linkedlistransversal(f);
    cout<<endl;
    cout<<"Dequeue element : "<<dequeue()<<endl;
    cout<<"Dequeue element : "<<dequeue()<<endl;
    cout<<"Dequeue element : "<<dequeue()<<endl;
    cout<<"Dequeue element : "<<dequeue()<<endl;
    cout<<"Dequeue element : "<<dequeue()<<endl;
    return 0;
}
