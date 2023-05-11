#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node *next;
};

void reverse (node *&head, node* curr, node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
    
}

node *reverselinkedlist (node *&head)
{
    node *curr = head;
    node *prev = NULL;
    
    reverse (head, curr, prev);
    return head;

}

void print (node *ptr)
{
    while (ptr != NULL) 
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
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

    reverselinkedlist(n1);

    print(n1);
    
    return 0;
}
