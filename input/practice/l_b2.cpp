#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int count = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout<<count<<" ";
            count++;
            

        }
        cout<<endl;
    }
    
    return 0;
}
