#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
      for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
