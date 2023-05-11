#include<iostream>
//#include<string>
using namespace std;

bool palindrome (char c[], int i)
{
    int j = 0;
    //cout<<c[i-1];
    //cout<<(int)c[3]<<endl;
    while (j <i/2)
    {
        if (c[i-1] < 48)
        {
            i--;
        }
        else if (c[i-1] >= 91 && c[i-1] <= 96)
        {
            i--;
        }
        else if (c[i-1] >= 123 && c[i-1] <= 127)
        {
            i--;
        }
        
        
        
        if (c[j] >= 48 && c[j] <= 57)
        {
            
            if (c[j] == c[i-1])
            {
                
                j++;
                i--;
            }
            else{
                
                return false;
            }
        }

        else if (c[j] >= 65 && c[j] <= 90)
        {
            if (c[j] == c[i-1])
            {
                
                j++;
                i--;
            }
        
            else if ((int)c[j] + 32 == (int)c[i-1])
            {
                
                
                j++;
                i--;
            }
            else{
                
                return false;
            }
        }

        else if (c[j] >= 97 && c[j] <= 122)
        {
            if (c[j] == c[i-1])
            {
                
                j++;
                i--;
            }

            else if ((int)c[j] == (int)c[i-1])
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
    return true;
}

int main(int argc, char const *argv[])
{
    char c[20] = "c1 O$d@eeD o1c#";
    //cout<<c[3];
    //cout<<c;
    int i=0;
    //cout<<c[13];
    for (i = 0; c[i] != '\0'; i++)
    {
    
    }
    cout<<palindrome(c, i);

    // string s = "mayank";
    // cout<<s[0];
    return 0;
}