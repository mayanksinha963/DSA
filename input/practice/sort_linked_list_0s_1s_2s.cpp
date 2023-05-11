#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node * next;
};

void print(node *head)
{
    node* ptr = head;
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
}

node *sort (node *head)
{
    node *ptr = head;
    int zero = 0;
    int first = 0;
    int second = 0;
    while (ptr != NULL)
    {
        if (ptr->data == 0)
        {
            zero++;
        }
        else if (ptr->data == 1)
        {
            first ++;
        }
        else if (ptr->data == 2) {
            second ++;
        }
        ptr = ptr->next;
        
    }
    
    node *temp = head;
    while (temp != NULL)
    {
        if(zero != 0)
        {
            temp->data = 0;
            zero--;
        }
        else if (first != 0)
        {
            temp->data = 1;
            first--;
        }
        else if (second != 0)
        {
            temp->data = 2;
            second--;
        }
        temp = temp->next;
    }
    return head;
    
}

int main(int argc, char const *argv[])
{
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();
    node* n4 = new node();
    node* n6 = new node();
    node* n5 = new node();

    n1->data = 1;
    n1->next = n2;
    
    n2->data = 0;
    n2->next = n3;

    n3->data = 2;
    n3->next = n4;
    
    n4->data = 1;
    n4->next = n5;

    n5->data = 2;
    n5->next = n6;

    n6->data = -1;
    n6->next = NULL;

    sort(n1);

    print(n1);
    return 0;
}
