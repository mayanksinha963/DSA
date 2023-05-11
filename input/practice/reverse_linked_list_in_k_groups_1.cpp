#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

node *reverse(node *head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    while (next != NULL)
    {
        

        int count = 0;
        while (count < k && curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
            
        }
        
        //cout<<prev->data<<endl;
        
        if (next != NULL)
        {
            head->next = next;
            curr = next;
        }
        
    }
    return prev;
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

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 4;
    n4->next = NULL;

    reverse(n1, 2);
    print(n1);

    return 0;
}
