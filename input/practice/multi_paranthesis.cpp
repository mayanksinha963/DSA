#include <iostream>
#include <stack>

using namespace std;

bool paranthesis(string exp)
{
    stack<char> s;
    char ch;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            s.push(exp[i]);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else
            {
                switch (exp[i])
                {
                case ')':
                    ch = s.top();
                    s.pop();
                    if (ch == '}' || ch == ']')
                    {
                        return false;
                    }
                    break;

                case ']':
                    ch = s.top();
                    s.pop();
                    if (ch == '}' || ch == ')')
                    {
                        return false;
                    }
                    break;

                case '}' :
                
                 ch = s.top();
                s.pop ();
                    if (ch == ']' || ch== ')')
                    {
                        return false;
                    }
                    break;
                }
            }
            
        }
        
    }
    if (s.empty() == 1)
    {
        return true;
    }
    
    
    
}
int main(int argc, char const *argv[])
{
    string expr = "())";
   if (paranthesis(expr))
      cout << "Balanced";
   else
      cout << "Not Balanced";
    return 0;
}
