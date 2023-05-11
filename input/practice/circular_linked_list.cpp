#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};

struct node *insertionatfirst (struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data= data;
    struct node *p= head;
    while (p->next != head)
    {
        p= p->next;
    }
    p->next = ptr;
    ptr->next = head;
    
    return ptr;
}

void linkedtransversal (struct node *ptr)
{
    cout<<"Element is : ";
    struct node *p = ptr;
    do
    {
        cout<<p->data<<" ";
        p= p->next;
    } while (p != ptr);
    // cout<<p->data<<" ";
    // p=p->next;
    // while (p != ptr)
    // {
    //     cout<<p->data<<" ";
    //     p= p->next;
    // }
    
}



int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node * )malloc(sizeof(struct node));
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node * )malloc(sizeof(struct node));
    fourth = (struct node * )malloc(sizeof(struct node));

    head->data = 11;;
    head->next= second;

    second->data = 15;
    second->next = third;

    third->data = 17;
    third->next = fourth;

    fourth->data = 19;
    fourth->next = head;

    head = insertionatfirst(head, 5);
    // head = insertionatfirst(head, 5);
    // head = insertionatfirst(head, 5);
    linkedtransversal(head);

    return 0;
}
