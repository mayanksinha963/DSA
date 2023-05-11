#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    int a= 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num-a; j++)
        {
            cout<<" ";
        }
        a++;
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
            cout<<" ";
        }
     cout<<endl;   
    }
    
    return 0;
}
