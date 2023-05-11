#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "daabcbaabcbc";
    string part = "abc";
    while (s.length() != 0 && s.find(part) <s.length() )
    {
        s.erase(s.find(part), part.length());
    }

    for (int i = 0;s[i] != '\0'; i++)
    {
        cout<<s[i];
    }
    
    
    return 0;
}
