#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num,a;
    cout<<"Enter the number"<<endl;
    cin>>num;
    a= num;
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout<<" ";
        }
        for (int k = i; k <= num; k++)
            {
                cout<<"*";
            }
        cout<<endl;
    }
    
    return 0;
}
