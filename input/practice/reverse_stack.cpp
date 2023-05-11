#include<iostream>
#include<stack>
using namespace std;



int main(int argc, char const *argv[])
{
    stack<char> s;
    
    string st = "love";

    for (int i = 0; i < st.length(); i++)
    {
        char ch = st[i];
        s.push(ch);
    }
    
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<ans;
    
    return 0;
}
