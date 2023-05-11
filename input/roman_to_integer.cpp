#include<iostream>
//#include<string>

using namespace std;

int value (char s)
{
    if (s == 'I')
    {
        return 1;
    }
    else if (s == 'V')
    {
        return 5;
    }
    else if (s == 'X')
    {
        return 10;
    }
    else if (s == 'L')
    {
        return 50;
    }
    else if (s == 'C')
    {
        return 100;
    }

    else if (s == 'D')
    {
        return 500;
    }

    else if (s == 'M')
    {
        return 1000;
    }

    else {
        return -1;
    }
    
}
int rti (string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
       int s1 = value(s[i]); 
       if ((i+1) < s.length())
       {
           int s2= value(s[i+1]);
           if (s1 >= s2)
           {
               res = res + s1;
           }
           else {
               res = res + s2 - s1;
               i++;
           }
           
       }
       else {
           res = res + s1;
       }
       
    }
    return res;
}

int main(int argc, char const *argv[])
{
    string str;
    cout<<"Enter the roman number "<<endl;
    cin>>str;
    //cout<<str;
    cout<<rti(str);
    return 0;
}
