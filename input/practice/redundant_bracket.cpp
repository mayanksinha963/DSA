#include<iostream>
#include<stack>

using namespace std;

bool check (stack<char> &st)
{
    
    char t = st.top();
    if (t == '+' || t== '-' || t== '*' || t== '/')
    {
        st.pop();
        t = st.top(); 
        
        while (t!= '(' && t != st.empty())
        {
            
            st.pop();
            t= st.top();
        }
        st.pop();
        return true;
        
    }
    else{
        return false;
    }
    
}

bool redundant(string &s)
{
    stack<char> st;
    //cout<<s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i]== '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }

        else if(s[i] == ')')
        {
           
            if(!check(st))
            {
                
                return true;
            }
        }
         
    }
   
    return false;
}

int main(int argc, char const *argv[])
{
    string expression = "(a+b*(c/d))";
    cout<<redundant(expression);
    return 0;
}
