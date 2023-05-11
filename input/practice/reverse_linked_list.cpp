#include<iostream>
using namespace std;

class node{
    public :
    int data;
    node* next;
};

node *reverse (node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr= forward;
        
    }

    return prev;
    
}

void print (node *head)
{
    while (head != NULL)
    {
        cout<<head->data;
        head = head->next;
    }
    
}

int main(int argc, char const *argv[])
{
    node* n1= new node ();
    node* n2= new node ();
    node* n3= new node ();
    node* n4= new node ();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 4;
    n4->next = NULL;

    n1 = reverse(n1);
    print(n1);


    return 0;
}
