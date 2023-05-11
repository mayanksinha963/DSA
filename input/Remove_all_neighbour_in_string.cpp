#include<iostream>
using namespace std;

string check (string s){
    
    int ch;
    int i =0;
    for (int i = 0; i < s.length(); i++)
    {
        

        //cout<<i<<" "<<s[i]<<endl;
        ch = s[i];
        //cout<<ch<<" "<<s[i-1]<<" "<<(int)s[i-1]<<endl;
        if (ch+1 == (int)s[i-1])
        {
            //cout<<1;
            s.erase(s.find(s[i-1]), 2);
            return check(s);
            
        }
        else if (ch+1 == (int)s[i+1])
        {
            //cout<<2;
            s.erase(s.find(s[i]), 2);
            return check(s);
        }
        else if (ch-1 == (int)s[i-1])
        {
            //cout<<3;
            s.erase(s.find(s[i-1]), 2);
            return check(s);
        }  
        else if (ch-1 == (int)s[i+1])
        {
            //cout<<4;
            s.erase(s.find(s[i]), 2);
            return check(s);
        }  
        //cout<<endl;
    }
    return s;
    
}

int main(int argc, char const *argv[])
{
    string s = "azxxzy";
   // s.erase(s.find(s[2]), 2);
    
    cout<<check(s);

    return 0;
}
