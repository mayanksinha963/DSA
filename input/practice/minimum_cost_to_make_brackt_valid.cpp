#include<iostream>
#include<stack>
using namespace std;

bool check(stack<char>&st)
{
    
    if(st.empty())
    {
        //cout<<1;
        return true;
    }

    char ch = st.top();
    st.pop();
    //cout<<ch<<" "<<st.top()<<endl;
    if((!st.empty()) && ch != st.top())
    {
        //cout<<1;
        return false;
    }
    check(st);
}


int findMinimumCost (string str)
{
    stack<char>st;
    for (int i = 0; i < str.size(); i++)
    {
        
        if(str[i] == '{')
        {
            st.push(str[i]);
        }
        else if (str[i] == '}'  && !st.empty() && st.top() == '{')
        {
            st.pop();
        }
        else if(str[i] =='}')
        {
            st.push(str[i]);
        }
         
    }
    
    int n = st.size();
    

    
    if (n %2 == 0)
    {
        if(check(st) == 0)
        {
            
            return ((n/2) + 1);
        }
        else 
        {
            return (n/2);
        }
    }
    else 
    {
        return -1;
    }
    
    
}

int main(int argc, char const *argv[])
{
    string expression ="{}}}{}{{{}";
    cout<<findMinimumCost(expression);
    return 0;
}
