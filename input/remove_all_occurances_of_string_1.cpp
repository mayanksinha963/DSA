#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "axxxyyyb";
    //dababc
    string part = "xy";
    int l = part.size();
    int j = 0;
    
    int m;
    for (int i = 0; i < s.length(); i++)
    {
        m = i;
        if (s[m]==part[j])
        {
            
            
            for ( j = 0; j < part.length() ; j++)
            {
                if (s[m]==part[j])
                {
                    m++;
                }
                else{
                    j = 0;
                    break;
                }

            }
            //cout<<j;
        }

        if (j == part.length())
        {
            for (int k = i; k < s.length(); k++)
            {
                //cout<<k;
                s[k] = '\0';
                s[k] = s[k] ^ s[k + l];
                s[k + l] = s[k] ^ s[k + l];
                s[k] = s[k] ^ s[k + l];
                //cout<<s[k];
            }
        i = 0;  
        j= 0;
        }
        
        
    }
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        cout<<s[i];
    }
    
    return 0;
}
