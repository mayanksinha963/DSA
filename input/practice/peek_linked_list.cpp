#include<iostream>
#include<stdlib.h>
using namespace std;
class stack {
    public :
    int data;
    stack *next;
};

void transversallinked (stack *ptr)
{
    cout<<"Element is ";
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
}
int peek (stack *ptr, int index)
{
    for (int i = 0; (i < index -1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else {
        return -1;
    }
    
    
}

int stacktop (stack *ptr)
{
    return ptr->data;
}

int stackbottom (stack *ptr)
{
    stack *p = ptr;
    while (p->next != NULL)
    {
        p = p->next;
        //cout<<p->data<<endl;
    }
    //cout<<"Mayank"<<endl;
    return p->data;
    
    
}
int main(int argc, char const *argv[])
{
    stack *a= (stack *)malloc(sizeof(stack));
    stack *b= (stack *)malloc(sizeof(stack));
    stack *c= (stack *)malloc(sizeof(stack));
    stack *d= (stack *)malloc(sizeof(stack));

    a->data = 4;
    a->next = b;

    b->data = 5;
    b->next = c;

    c->data = 3;
    c->next = d;

    d->data = 9;
    d->next = NULL;

    transversallinked(a);
    cout<<endl;
    cout<<peek(a, 5)<<endl;
    cout<<stacktop(a)<<endl;
    cout<<stackbottom(a)<<endl;
    return 0;
}
