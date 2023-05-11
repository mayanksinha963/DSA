#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int paranthesis (char ch)
{
    if (ch == '(' || ch == ')' || ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '^')
    { 
        return 1;
    }
    return 0;
    
}

int operand (char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if ( ch == '*' || ch == '/')
    {
        return 2;
    }
    else if ( ch== '+' || ch == '-')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}

void postfix (string exp)
{
    stack<char> s;
    string result;

    for (int i = 0; i < exp.length(); i++)
    {
        if (!paranthesis (exp[i]))
        {
            result += exp[i];
        }

        else if (exp [i] == '(')
        {
            s.push(exp[i]);
        }
        else if (exp [i] == ')')
        {
            while (s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
            s.pop();
            
        }
        else 
        {
            while (!s.empty() && operand(exp[i]) <= operand(s.top()))
            {
                result += s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
        
    }
    while (!s.empty())
    {
        result +=s.top();
        s.pop();
    }
    
    cout<<result;
}
int main(int argc, char const *argv[])
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    postfix(exp);

    return 0;
}
