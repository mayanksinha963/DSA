#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;
};

int middle (node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head->data;
    }
    
    if (head->next->next == NULL)
    {
        return head->next->data;
    }

    node *slow = head;
    node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow= slow->next;
        
    }
    return slow->data;
    
    
    
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

    cout<<middle(n1);
    //print(n1);
    return 0;
}
