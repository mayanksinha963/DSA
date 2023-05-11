#include<iostream>
#include<stdlib.h>
using namespace std;
class stack {
    public :
    int size;
    int top;
    int *arr;
};

int isEmpty (stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

// int isFull (stack *ptr)
// {
//     if(ptr->top == ptr->size-1)
//     {
//         return 1;
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    stack *s;
    s= (stack *) malloc (sizeof(stack));
    s->size = 15;
    s->top= -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0] = 7;
    s->top ++;

    if (isEmpty(s))
    {
        cout<<"The stack is empty";
    }
    else {
        cout<<"The stack is not empty";
    }
    cout<<endl;

    // if (isFull(s))
    // {
    //     cout<<"Stack is not empty";
    // }
    // else {
    //     cout<<"Stack is empty";
    // }
    
    return 0;
}
