#include<iostream>
using namespace std;
string check (string &s)
{
    int i = 0;
    //char ch; 
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i] == s[i+1])
        {
            s.erase(s.find(s[i]), 2);
            return check(s);
        }
        
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s= "azxxzy";
    check(s);
    cout<<s;
    return 0;
}
