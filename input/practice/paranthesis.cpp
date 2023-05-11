#include<iostream>
#include<stack>

using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char>st;
    
    int num = expression.length();
    for(int i = 0; i <num; i++)
    {
        
        if(expression [i] == '[')
        {
            
            st.push(expression[i]);
            
        }
        else if (expression[i] == '(')
        {
            
            st.push(expression[i]);
            
        }
        else if (expression[i] == '{')
        {
            st.push(expression[i]);
            
        }
        
        else if(expression[i] == ']')
        {
            if(st.empty())
            {
                return false;
            }

            else if(st.top() == '[')
            {
                
                st.pop();
            }
           
           else if (st.top() != '[')
           {
            return false;
           }
        }
        else if(expression[i] == ')')
        {

            if(st.empty())
            {
                return false;
            }

            else if(st.top() == '(')
            {
                
                st.pop();
            }
           
           else if (st.top() != '(')
           {
            return false;
           }
        }
        else if(expression[i] == '}')
        {
           if(st.empty())
            {
                return false;
            }

            else if(st.top() == '{')
            {
                
                st.pop();
            }
           
           else if (st.top() != '{')
           {
            return false;
           }
        }
    }

    if(!(st.empty()))
    {
        return false;
    }
    else {
        return true;
    }
}

int main(int argc, char const *argv[])
{
    string expression = "{()}][";
    cout<<isValidParenthesis(expression);
    

    return 0;
}
