#include<iostream>
using namespace std;


class node {
    public :
    int data;
    node* next;
};

node *newNode(int data)
{
    node * new_node = new node ();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node *reverse (node *head)
{
    node *ptr = head;
    node *prev = NULL;
    node *forward = NULL;
    while (ptr != NULL)
    {
        forward = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = forward;
    }
    return prev;
}


node *sum(node* n1, node *h1)
{
    int first = 0;
    int second = 0;
    
    node *ptr1 = n1;
    node *ptr2 = h1;


    while (ptr1 != NULL)
    {
        first = first * 10;
        first = first + ptr1->data;
        ptr1 = ptr1->next;
    }
    
    while (ptr2 != NULL)
    {
        second = second * 10;
        second = second + ptr2->data;
        ptr2 = ptr2->next;
    }
    
    int total = first + second;

    node *res = NULL;
    node *temp,  *prev = NULL;

    
    while (total != 0)
    {

        int rem = total % 10;
        total = total /10;
        temp = newNode (rem);

        if (res ==0)
        {
            res = temp;
        }
        else
        {
            prev->next = temp;
        }
        //cout<<res;
        prev = temp;
    }

    // while (res != NULL)
    // {
    //     cout<<res->data;
    //     res = res->next;
    // }
    
    return reverse (res);
}

void print(node *ptr)
{
    while(ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    node* n1 =new node();
    node* n2 =new node();
    node* n3 =new node();

    n1->data = 2;
    n1->next = n2;

    n2->data = 6;
    n2->next = n3;

    n3->data = 4;
    n3->next = NULL;


    node* h1 = new node();
    node* h2 = new node();

    h1->data = 3;
    h1->next = h2;

    h2->data = 2;
    h2->next = NULL;


    

    node * result = sum(n1, h1);
   print(result);
    return 0;
}
