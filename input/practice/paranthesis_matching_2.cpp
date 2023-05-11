#include<iostream>
using namespace std;

class stack {
    public :
    int top;
    int size;
    string *arr;
};

int isEmpty (stack *ptr)
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
    else
    {
        return 0;
    }
}

void push (stack *ptr, char value)
{
    if (isFull (ptr) == 1)
    {
        cout<<"Stack is overflow";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
    
}

int pop(stack *ptr)
{
    if (isEmpty (ptr) == 1) 
    {
        cout<<"Stack is overflow"<<endl;
        //return -1;
    }
    else{
        string val = ptr->arr[ptr->top];
        ptr->top--;
        //cout<<val<<endl;
        //return val;
    }
    
}

int paranthesis (string exp)
{
    stack *s = (stack *) malloc (sizeof(stack));
    s->size = 100;
    s->top = -1;
    s->arr = (string *) malloc (s->size );

    for (int i = 0; exp[i] != '\0'; i++)
    {
        //cout<<exp[i]<<endl;
        if (exp[i]== '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
            
        }
        
        
    }
    if (isEmpty(s))
        {
            return 1;
        }
        else {
            return 0;
        }
    
}

int main(int argc, char const *argv[])
{
    string exp = "((8)(*--$$9)))";
    if(paranthesis(exp)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not balanced"<<endl;
    }
    return 0;
}
