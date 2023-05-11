#include<iostream>
#include<stack>
using namespace std;

bool paranthesis (string exp)
{
stack<char> s;
char ch;
for (int i = 0; i < exp.length(); i++)
{
    if (exp[i] == '(' || exp [i] == '{' || exp[i] == '[')
    {
        s.push(exp[i]);
    }
    else
    if (s.empty())
    {
        return false ;
    }
    else {
        
        switch (exp [i])
        {
        case ')':
        ch = s.top();
        s.pop();
            if (ch == '}' || ch == ']')
            {
                return false;
            }

            break;
        
        case '}':
        ch = s.top();
        s.pop();
            if (ch == ')' || ch == ']')
            {
                return false;
            }

            break;
        case ']':
        ch = s.top();
        s.pop();
            if (ch == ')' || ch == ']')
            {
                return false;
            }

            break;
        }
        
    }
    
        
}
return (s.empty());
}

int main(int argc, char const *argv[])
{
    string exp = "()}";
    if (paranthesis (exp))
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
    return 0;
}
