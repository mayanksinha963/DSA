#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
       count = i;
    for (int j = 1; j <= i; j++)
       {
           cout<<count<<" ";
           count++;
       }
        cout<<endl;
    }
    
    return 0;
}
