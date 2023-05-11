#include<iostream>
using namespace std;

void powerset(string s, int n, string cur = "")
{
    if (n== s.length())
    {       
        cout<<cur<<endl;
        return ;
    }
    powerset(s, n +1, cur + s[n]);
    powerset(s, n +1, cur);
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    int n = 0;
    powerset(s, n);
    

    return 0;
}
