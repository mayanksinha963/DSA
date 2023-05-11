#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int i, j ,k;
    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= num- i; j++)
        {
           cout<<" ";
        }
        for (; j <= num; j++)
        {
            cout<<"*";
        }
        for (; j <= num +i -1; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    
    int l, m, n;
    for (l = 1; l <= num; l++)
    {
        for (m = 1; m <= l-1; m++)
        {
            cout<<" ";
        }
        for (; m <= num; m++)
        {
            cout<<"*";
        }
        for (n=1; n < num -l + 1; n++)
        {
           cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}
