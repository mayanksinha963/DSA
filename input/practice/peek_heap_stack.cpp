#include<iostream>
using namespace std;

class stack 
{
    public:
    int size;
    int top;
    int *arr;
};



int peak (stack *ptr, int index)
{
    int arrayindex = ptr->top - index +1;
    if (arrayindex < 0)
    {
        cout<<"Please enter the correct position"<<endl;
    }
    
    return ptr->arr[arrayindex];
    

}

int main(int argc, char const *argv[])
{
    stack *s = (stack *)malloc (sizeof(stack));
    s->size = 11;
    s->top= -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    for (int i = 0; i < s->size; i++)
    {
        s->arr[i] = i;
        s->top++;
    }

    cout<<peak(s, 1);
    
    return 0;
}
