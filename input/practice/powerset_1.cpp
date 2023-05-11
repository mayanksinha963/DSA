#include<iostream>
using namespace std;

void powerset(string s, int n= 0, string cur = "")
{
    if (n == s.size())
    {
        cout<<cur<<endl;
        return;
    }

    powerset(s, n+1, cur + s[n]);
    powerset(s, n+1, cur);
    
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    powerset(s);
    return 0;
}
