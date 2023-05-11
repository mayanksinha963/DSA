#include<iostream>
using namespace std;

bool palindrome (string s, int n, int m)
{
    if (n >= m)
    {
        return true;
    }
    else if (s[n] != s[m]) 
    {
        
        return false;
    }
    return palindrome(s, n+1, m-1);
    
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    cout<<endl;
    int n = 0;
    int m = s.size()-1;
    //cout<<s.size()<<endl;
    cout<<palindrome(s, n, m);
    return 0;
}
