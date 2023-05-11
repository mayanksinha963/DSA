#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //cout<<"*";
            // if (i%2 != 0)
            // {
            //     cout<<"1";
            // }
            // else if (i%2 == 0)
            // {
            //     cout<<"0";
            // }
            if ((i + j) % 2 == 0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            
            
        }
        cout<<endl;
    }
    
    return 0;
}
