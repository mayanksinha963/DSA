#include<iostream>

using namespace std;

bool check (string s, int n)
{
    //cout<<s[1];
    
    int j = 0;
    int i = n-1;
    
    while (j < n/2)
    {
    //     //cout<<j<<endl;
        if (s[i] < 97)
        {
            
            i--;
            
        }
        else if (s[i] > 122)
        {
            i--;
        }
    
        else {
        if (s[j] >= 97 && s[j] <= 123)
        {
            //  cout<<s[j];
            //  cout<<s[i];
            if (s[j] == s[i])
            {
                
                j++;
                i--;
            }
            else{
                return false;
            }
            
        }
        else {
            j++;
        }
        }
        
     }
    return true;
    
    
    
}

int main(int argc, char const *argv[])
{
    string s = "A man, a plan, a canal : Panama";
    int n = s.length();
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] -'A' + 'a';
        }
        
    }
    
    cout<<check(s, n);
    
    
    return 0;
}
