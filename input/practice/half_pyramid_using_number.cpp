#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int count=1;
    for (int i = num; i > 0; i--)
    {
        for (int j = i; j <= num; j++)
        {
            cout<<count;
            
        }
        count++;
        cout<<endl;
    }
    
    return 0;
}
