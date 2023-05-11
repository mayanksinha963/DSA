#include<iostream>
using namespace std;

class stack {
    public :
    int* arr;
    int top1;
    int top2;
    int size;
    stack (int size)
    {
        this->size = size;
        arr = new int [size];
        top1 = -1;
        top2 = size;
    }

    void push1 (int element)
    {
        if (top2 <= top1+1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top1++;
            arr[top1] = element;
        }
        
    }

    void push2 (int element)
    {
        if (top2 <= top1+1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else {
            top2--;
            arr[top2] = element;
            
        }
    }

    void pop1 ()
    {
        if (top1 == -1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else {
            top1--;
        }
        
    }

    void pop2()
    {
        if (top2 == size)
        {
            cout<<"Stack is empty";
        }
        else{
            top2++;
        }
        
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

};

int main(int argc, char const *argv[])
{
    stack st(4);
    st.push1(2);
    st.push1(4);
    st.push2(5);
    st.push2(4);
    st.print();
    // st.push1(4);
    // st.push2(109);
    // st.pop2();
    // st.pop2();
    // st.pop2();
    //st.pop1();
    return 0;
}
