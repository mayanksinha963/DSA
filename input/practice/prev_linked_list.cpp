#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insertionathead (struct node *head, int data)
{
    struct node *ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data= data;
    ptr->next=head;
    head->prev=ptr;
    return ptr;
} 

void linkedtransversal (struct node *ptr)
{
    struct node *last;
    cout<<"Elements : ";
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        last = ptr;
        ptr= ptr->next;

    }
   // cout<<"Hello";
    //ptr=ptr->prev;
    //cout<<ptr->data;
    //cout<<ptr->data;
    while (last != NULL)
    {
        cout<<last->data<<" ";
        last= last->prev;
        //cout<<ptr->prev;

    }
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data =11;
    head->next= first;
    head->prev = NULL;

    first->data = 15;
    first->next = second;
    first->prev = head;

    second->data = 19;
    second->next = third;
    second->prev = first;

    third->data = 23;
    third->next = fourth;
    third->prev= second;

    fourth->data = 25;
    fourth->next= NULL;
    fourth->prev= third;

    head= insertionathead(head, 5);
    linkedtransversal(head);

    return 0;
}
