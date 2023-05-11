#include<iostream>
using namespace std;
class stack
{
    public :
    int size;
    int top;
    int *arr;

};

int stacktop (stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackbottom (stack *ptr)
{
    return ptr->arr[0];
}

int main(int argc, char const *argv[])
{
    stack *s = (stack *)malloc (sizeof(stack));
    s->size= 11;
    s->top= -1;
    s->arr = (int *)malloc (s->size * sizeof(int));
    for (int i = 0; i < s->size; i++)
    {
        s->arr[i] = i + 10;
        s->top++;
    }

    // for (int i = 0; i < s->size; i++)
    // {
    //     cout<<s->arr[i]<<endl;
        
    // }
    cout<<"Stack top :";
    cout<<stacktop(s)<<endl;

    cout<<"Stack bottom :"<<stackbottom(s)<<endl;
    
    return 0;
}
