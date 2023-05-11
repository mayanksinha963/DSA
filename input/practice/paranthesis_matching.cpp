i#include<iostream>
//#include<stack>
using namespace std;
class stack {
    public :
    int size;
    int top;
    string *arr ;

};
int isempty (stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else {
        return 0;
    }
    
}

int isFull (stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void push(stack *ptr, string value)
{
    if (isFull(ptr) == 1)
    {
         cout<<"stack is overlay"<<endl;
    }
    else {
    ptr->top++;
    ptr->arr[ptr->top] = value;
    }
}

void pop (stack*ptr, string value)
{
    if (isempty(ptr) == 1)
    {
        cout<<"stack is Empty"<<endl;
    }
    else
    {
        ptr->arr[ptr->top] = value;
        ptr->top--;
    }
    
}

int paranthesis (string *ptr)
{
    stack *p;
    p->size = 100;
    p->top=-1;
    p->arr = (string *) malloc (p->size * sizeof(string));
    
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == '(')
        {
            push(p, '(');
        }
        else if (ptr[i] == ')')
        {
            pop(p, ')');
        }
        
    }
    if (isempty(p) == 1)
    {
        return 1;
    }
    else {
        return 0;
    }
    
}

int main(int argc, string const *argv[])
{
    string *exp = "((8)(*--$$9))";
    if (paranthesis(exp) == 1)
    {
        cout<<"The Paranthesis is matching"<<endl;
    }
    else {
        cout<<"The Paranthesis is not matching"<<endl;
    }
    

    //string * exp = "((8)(*--$$9))";
    // Check if stack is empty
    // if(paranthesis(exp)){
    //     printf("The parenthesis is matching");
    // }
    // else{
    //     printf("The parenthesis is not matching"); 
    // }
    

    return 0;
}
