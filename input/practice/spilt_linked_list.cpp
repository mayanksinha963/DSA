#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int length (node *head)
{
    int count =0;
    node * ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    
    return count;
    
}

node *spilt (node *head, int length)
{
    if (length % 2 == 0)
    {
        node *ptr = head;
        int count = 1;
        while (count < length / 2)
        {
            ptr = ptr->next;
            count++;
        }
        node *cont = ptr->next;
        node *resume = ptr->next;
        ptr->next = head;
        count = 1;
        while (count < length/2)
        {
            cont = cont->next;
            count++;
        }
        cont->next = resume;
        
        return resume;
    }
    else 
    {
        node *ptr = head;
        int count = 1;
        while (count < length / 2)
        {
            ptr = ptr->next;
            count++;
        }
        node *cont = ptr->next;
        node *resume = ptr->next;
        ptr->next = head;
        count = 0;
        while (count < length/2)
        {
            cont = cont->next;
            count++;
        }
        cont->next = resume;
        
        return resume;
    }
    
}

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data<<" ";
        ptr = ptr->next;
    }
}

void print1 (node *head)
{
    node *ptr = head;
    do
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    } while (ptr != head);
    
}

int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();
    node *n5 = new node();

    n1->data = 12;
    n1->next = n2;

    n2->data = 31;
    n2->next = n3;

    n3->data = 15;
    n3->next = n4;

    n4->data = 1;
    n4->next = n5;

    n5->data = 6;
    n5->next = NULL;

    // deletion(n1);
    int len = length(n1);
    print(n1);
    cout<<endl;

    // spilt(n1, len);
    // print1(n1);
    // cout<<endl;

    
    node* spilt1;
    spilt1 = spilt(n1, len);
    print1(spilt1);
    return 0;
}
