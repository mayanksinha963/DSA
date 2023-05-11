#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
struct node * deletionattop(struct node *head)
{
    struct node *ptr = head;
    head=head->next;
    free(ptr);
    return head;
}

struct node * deletionatindex (struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    //int i =0;
    for (int i = 0; i < index-1; i++)
    {
        p= p->next;
        q= q->next;
        
    }
    
    p->next = q->next;
    free(q);
    return head;
    
}

struct node *deletionatlast (struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next= q->next;
    free(q);
    return head;
}
struct node *deletionatvalue (struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL && q->data != value)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data = value)
    {
        p->next = q->next;
        free(q);
    }
    
    return head;
    
}

void linkedlisttransversal (struct node *ptr)
{
    cout<<"Your element is ";
    while (ptr != NULL)
    {   
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
}


int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    fourth = (struct node *) malloc (sizeof(struct node));

    head->data = 11;
    head->next = second;

    second ->data = 15;
    second->next = third;

    third->data = 19;
    third-> next = fourth;
    
    fourth->data = 23;
    fourth ->next = NULL;
    head= deletionatvalue(head, 23);
    linkedlisttransversal(head);
    return 0;
}
