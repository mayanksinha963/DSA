#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    int a= num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < 2*(num- i); k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i ; j--)
        {
            cout<<"*";
            
        }
        for (int k = 0; k < 2*(num-a); k++)
        {
            cout<<" ";
            
        }
        a--;
        for (int j = num; j > i ; j--)
        {
            cout<<"*";
        }
        
     cout<<endl;   
    }
    
    
    
    
    return 0;
}
