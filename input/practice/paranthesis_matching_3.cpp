#include<iostream>
using namespace std;

class stack {
    public :
    int size;
    int top;
    string *arr;
};

int isEmpty (stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;       
    }
    return 0;
}

int isFull (stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {   
        return 1;
    }
    return 0;
    
}

void push (stack *ptr, char value)
{
    if (isFull (ptr))
    {
        cout<<"Stack is overflow!"<<endl;
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]= value;
    }
    
}

void pop (stack *ptr)
{
    if (isEmpty (ptr))
    {
        cout<<"Stack is overflow !!"<<endl;
    }
    else {
        string value = ptr->arr[ptr->top];
        ptr->top--;
    }
    
}

int paranthesis (string exp)
{
    stack *s = (stack *)malloc (s->size);
    s->size = 100;
    s->top = -1;
    s->arr = (string *)malloc (s->size);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        //cout<<exp[i]<<endl;
        if (exp [i] == '('|| exp [i] == '[' || exp[i] == '{')
        {
            push(s, exp[i]);
        }
        else {
            if (isEmpty (s))
            {
                return 0;
            }
            else if (exp [i] == ')')
            {
                pop (s);
            }
            else if (exp [i] == ']')
            {
                pop (s);
            }
            else if (exp[i] == '}')
            {
                pop (s);
            }
 

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
    string exp = "{7 - (3-2) + [ 8 + (99 -11)}}";

    if (paranthesis(exp)==1)
    {
        cout<<"Balance";
    }
    else {
        cout<<"Unbalanced";
    }
    
    

    return 0;
}
