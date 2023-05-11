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
    int count = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr= ptr->next;
    }
    return count;
}

node *spilt (node *head, int length)
{
    node *ptr= head;
    if(length % 2 == 0)
    {
        int count = 0;
        while (count < length/2)
        {
            ptr = ptr->next;
            count++;
        }
        node * cont = ptr->next;
        node * res = ptr->next;
        ptr->next = head;
        count = 0;
        while (count < length/2)
        {
            cont = cont->next;
            count++;
        }
        cont->next = res;
        return res;
    }
    else 
    {
        int count = 1;
        while (count < length/2)
        {
            ptr = ptr->next;
            count++;
        }
        node * cont = ptr->next;
        node * res = ptr->next;
        ptr->next = head;
        count = 0;
        while (count < length/2)
        {
            cont = cont->next;
            count++;
        }
        cont->next = res;
        return res;
    }
}

void print1 (node *head)
{
    node *ptr = head;
    do
    {
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    } while (ptr != head);
    
}


void print (node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
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

    print(n1);
    cout<<endl;
    int len = length(n1);

    n1 = spilt(n1, len);
    print1(n1);

    return 0;
}
