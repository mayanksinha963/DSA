#include<iostream>
using namespace std;

class stack {
    public :
    int* arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int [size];
        top = -1;
        
    }
    void push (int element)
    {
        if (size -1 > top )
        {
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is overflow"<<endl;a
        }
        
    }

    void pop ()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
        }
        
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else {
            cout<<"Stack is empty";
            return -1;
        }
        
    }

    bool empty()
    {
        if (top == -1)  
        {
            cout<<"Stack is empty";
            return true;
        }
        else {
            cout<<"Stack is not empty";
            return false;
        }
        
    }

    int capacity ()
    {
        if (top == -1)
        {
            return 0;
        }
        else {
            int i = -1;
            while (i != top)
            {
                i++;
            }
            return i+1;
            
        }
        
        
    }
};

int main(int argc, char const *argv[])
{
    stack st(3);

    st.push(1);
    st.push(4);
    st.push(2);
    st.push(5);
    // cout<<st.peek()<<endl;

    // st.pop();
    // cout<<st.peek()<<endl;
    // cout<<st.capacity()<<endl;
    // st.pop();
    // st.pop();
    // cout<<st.peek()<<endl;
    // st.pop();
    

    return 0;
}
