#include<iostream>
using namespace std;
class stack {
    public:
    int data;
    stack *next;
};

stack *top = NULL;
void transversallinked(stack *top)
{
    cout<<"Element is : ";
    while (top != NULL)
    {
        cout<<top->data<<" ";
        top= top->next;
    }
    
}

int isEmpty (stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
    
}


stack *push (stack *top, int value)
{
    // if (isEmpty(top) == 1)
    // {
    //     cout<<"Stack is empty"<<endl;
    // }
    // else
    // {
        stack *p = (stack *)malloc(sizeof(stack));
        p->data= value;
        p->next = top;
        //top = p;
        return p;
    //}
    //return 0;
    
};
int pop (stack *tp)
{
    if (isEmpty(top) == 1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else {
stack *p = (stack *)malloc(sizeof(stack));
    p = top;
    top= top->next;
    int a = p->data;
    
    
    free(p);
    return a;
    }
    return 0;
    
    
}
    

int main(int argc, char const *argv[])
{
    //stack *node = NULL;
    top = push(top, 5);
    top = push(top, 15);
    top = push(top, 20);
    top = push(top, 25);
    top = push(top, 28);
    int element = pop(top);
    cout<<element<<endl;
    transversallinked(top);
    //cout<<"Mayank"<<endl;
    return 0;
}
