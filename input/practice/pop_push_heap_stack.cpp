#include<iostream>
using namespace std;
class stack {
    public:
    int size;
    int top;
    int *arr;

};

int isEmpty (stack *ptr)
{
    if (ptr->top== -1)
    {
        return 1;
    }
    else if (ptr ->top == ptr->size-1)
    {
        return 2;
    }
    
    
    return 0;
    
}

void push(stack *ptr, int value)
{
    if (isEmpty(ptr)==2)
    {
        cout<<"Stack Overflow!"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
    
}

int pop(stack *ptr)
{
    if (isEmpty(ptr) == 1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
    return 0;
}

// int isFull (stack *ptr)
// {
//     if (ptr->top == ptr->size-1)
//     {
//         return 1;
//     }
//     return 0;
    
// }

int main(int argc, char const *argv[])
{
    stack *s = (stack *) malloc (sizeof(stack));
    s->size = 8;
    s->top= -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    for (int i = 0; i < s->size-1; i++)
    {
        s->arr[i] = i;
        s->top++;
    }
    
    

    if (isEmpty(s)==1)
    {
        cout<<"Stack is empty";
    }
    else if (isEmpty(s)==2)
    {
        cout<<"Stack is full";
    }
    
    else{
        cout<<"Stack is not empty";
    }
    cout<<endl;
    
    push(s, 5);
     for (int i = 0; i < s->size; i++)
    {
        cout<<s->arr[i]<<" ";
        
    }
    cout<<endl;
    cout<<pop(s)<<endl;
    


    return 0;
}
