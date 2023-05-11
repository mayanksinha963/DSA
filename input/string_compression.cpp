#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string c = "aaaaaaaaaa";
    vector<char>n; 
    int z;
    int count = 0;
    char x;
    for (int i = 0; i < c.length(); i++)
    {
        count = 1;
        while (c[i] == c[i+1])
        {
            i++;
            count++;
            //cout<<count<<endl;
        }
        n.push_back(c[i]);
        if (count != 1 && count < 10)
        {
            //cout<<(char)count<<endl;
            x= 48 + count;
            n.push_back(x);
        }
        else if (count>=10)
        {
            while (count != 0)
            {
                count = count/10;
                x= 48 + count;
                n.push_back(x);
            }
            

        }
    }
    
    for (int i = 0; i < n.size(); i++)
    {
        cout<<n[i];
        
    }
    
    return 0;
}
