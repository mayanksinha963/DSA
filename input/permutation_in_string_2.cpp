#include<iostream>
using namespace std;

bool check(int count1[], int count2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return 0;
        }
        
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    string s1= "d";
    string s2= "abc";
    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int n = s1[i] - 'a';
        count1[n]++;
    }
    int i = 0;
    while (i<s1.length())
    {
        int n = s2[i] - 'a';
        count2[n]++;
        i++;
    }

    if (check(count1, count2))
    {
        //cout<<"M";
        cout<<1;
        return 0;
    }

    while (i < s2.length())
    {
        int n = s2[i] - 'a';
        count2[n]++;
        int a = s2[i-s1.length()] - 'a';
        count2[a]--;
        i++;
        check(count1, count2);
    }
    
    if (check(count1, count2))
    {
        cout<<1;
        return 0;
    }
    cout<<0;
    
    
    return 0;
}
