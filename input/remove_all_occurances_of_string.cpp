#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    string s = "daabcbaabcbc";
    //dabaabcbc
    
    string part = "c";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == part[0] && s[i+1] == part[1] && s[i+2] == part[2])
        {
            
            for (int j = i; j < s.length(); j++)
            {
                
                s[j] = '\0';
                s[j] = s[j] ^ s[j+3];
                
                s[j+3] = s[j] ^ s[j+3];
                
                s[j] = s[j] ^ s[j+3];
               
            }
           
            i = 0;
           
        }
        
        // cout<<i;
        //cout<<s[i];
    }
    // cout<<s.length();
    for (int i = 0; s[i] != '\0'; i++)
    {
        cout<<s[i];
    }
    
    
    
    
    return 0;
}

