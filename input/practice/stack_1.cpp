#include<iostream>
using namespace std;

class stack {
    public :
    int* arr;
    int size;
    int top;
    stack(int size)
    {
        this->size = size;
        arr = new int [size];
        top = -1;

    }
    
    void push(int data)
    {
        if (size <= top +1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else {
            top++;
            arr[top] = data;
        }
        
    }

    void pop()
    {
        if (top == -1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top--;
        }

    }

    int peek ()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else {
            return arr[top];
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else 
        {
            cout<<"Stack is not empty"<<endl;
            return false;
        }        
    }
};

int main(int argc, char const *argv[])
{
    stack st(3);
    st.push(1);
    st.push (4);
    st.push(7);

    cout<<st.peek();
    st.pop();
    cout<<st.peek();
    st.pop();
    st.pop();
    st.pop();
    st.isempty();

    return 0;
}
