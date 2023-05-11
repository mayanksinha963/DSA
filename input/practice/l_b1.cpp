#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the value"<<endl;
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
