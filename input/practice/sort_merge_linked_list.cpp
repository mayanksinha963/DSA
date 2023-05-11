#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *insertattail (node *&temp, node *&curr)
{
    temp->next = curr;
    temp = curr;
}
node * mergesort (node* first, node *second)
{
    node *newhead = new node ();
    node *newtail = newhead;
    
    while (first != NULL && second != NULL)
    {
        
        if (first->data > second->data)
        {
            insertattail(newtail, second);
            second = second->next;
        }

        else if (first->data < second->data)
        {
            insertattail (newtail, first);
            first = first->next;
        }
        else if (first->data == second->data)
        {
            insertattail(newtail, first);
            first = first->next;
        }
        
    }
    
    while (first != NULL)
    {
        insertattail (newtail, first);
        first = first->next;
    }

    while (second != NULL)
    {
        insertattail(newtail, second);
        second = second->next;
    }
    
    
    return newhead->next;
    
    
    
}

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();

    n1->data = 1;
    n1->next = n2;

    n2->data = 3;
    n2->next = n3;

    n3->data = 4;
    n3->next = n4;

    n4->data = 5;
    n4->next = NULL;

    //print(n1);

    node *h1 = new node();
    node *h2 = new node();
    node *h3 = new node();
    node *h4 = new node();

    h1->data = 1;
    h1->next = h2;

    h2->data = 1;
    h2->next = h3;

    h3->data = 2;
    h3->next = h4;

    h4->data = 6;
    h4->next = NULL;

    //print(h1);

    n1 = mergesort(n1, h1);
    print(n1);
    
    return 0;
}
