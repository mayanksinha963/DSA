#include<iostream>
using namespace std;

void powerset (string s, int s_size)
{
    int pow_s_size = s_size * s_size;
    for (int i = 0; i < pow_s_size; i++)
    {
        for (int j = 0; j < s_size; j++)
        {
            if (i & (1 << j))
            {
                cout<<s[j];
            }
            
        }
        cout<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter the string ";
    cin>>s;
    int s_size = s.size();
    powerset(s, s_size);
    return 0;
}
