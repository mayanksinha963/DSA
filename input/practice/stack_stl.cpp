#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack <int> s;
    s.push(2);
    s.push(4);

    cout<<s.size()<<endl;

    s.pop();

    cout<<s.top()<<endl;

    if (s.empty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
    
    return 0;
}
