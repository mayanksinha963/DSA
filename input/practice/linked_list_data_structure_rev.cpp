#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};

void linkedlisttransversal (struct node *ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr= ptr->next;
    }
    
    
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;

    second->data= 15;
    second->next= third;

    third->data= 19;
    third->next= NULL;

    linkedlisttransversal(head);
    return 0;
}
