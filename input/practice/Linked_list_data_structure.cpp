#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};

void linkedlisttransversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element "<<ptr ->data<<endl;
        ptr = ptr->next;
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
    first = (struct node *)malloc (sizeof(struct node));
    second = (struct node *)malloc (sizeof(struct node));
    third = (struct node *)malloc (sizeof(struct node));
    fourth = (struct node *)malloc (sizeof(struct node));

    head->data = 7;
    head->next = second;

    second ->data = 11;
    second->next = third;

    third ->data = 15;
    third->next = fourth;

    fourth ->data = 19;
    fourth->next = NULL;

    linkedlisttransversal(head);

    return 0;
}
