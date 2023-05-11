#include<iostream>
using namespace std;

bool check (string s1, string s2)
{
    int j = 0;
    int m;
    int n;
    for (int i = 0; i < s2.length(); i++)
    {
        
        if (s2[i] == s1[j])
        {
            m = i;
            n = i;
            m++;
                n--;
                j++;
            while (s1[j] != '\0')
            {
                
                if (s2[m] == s1[j] || s2[n] == s1[j])
                {
                    m++;
                    n--;
                    j++;
                }
                else {
                    j = 0;
                    break;
                }
                if (j == s1.length())
                {
                    return true;
                }
                
                
                
            }
            
            
        }
        
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string s1 = "ab";
    string s2 = "eidboaoo";
    cout<<check(s1, s2);
    
    return 0;
}
