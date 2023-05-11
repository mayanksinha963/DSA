#include<iostream>
#include<stack>

using namespace std;

int main(int argc, char const *argv[])
{
    stack<string> s;
    s.push("Ayush");
    s.push("Love");
    s.push("Kancha");

    cout<<"Top Element "<<s.top()<<endl;  
    
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;
    return 0;
}
