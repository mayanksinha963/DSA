#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    for (int i = num; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
