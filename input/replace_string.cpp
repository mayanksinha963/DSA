#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<char>c;
    string s = "My self Mayank Sinha";
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i] == ' ')
        {
            c.push_back('@');
            c.push_back('2');
            c.push_back('0');
        }
        else {
            c.push_back(s[i]);
        }
        
    }
    

    for (int i = 0; i < c.size() ; i++)
    {
        cout<<c[i];
    }
    
    
    return 0;
}
