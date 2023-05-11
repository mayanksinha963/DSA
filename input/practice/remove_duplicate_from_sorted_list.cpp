#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};


node *removeduplicate (node* &head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node * curr = head;
    while (curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            node* next_next = curr->next->next;
            node* todelete = curr->next;
            delete(todelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
    
}

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();
    node *n5 = new node();

    n1->data = 1;
    n1->next = n2;

    n2->data = 1;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 4;
    n4->next = n5;

    n5->data = 5;
    n5->next = NULL;

    removeduplicate(n1);

    print(n1);
    return 0;
}
