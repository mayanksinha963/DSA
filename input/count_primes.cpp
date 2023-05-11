#include<iostream>
#include<cmath>
using namespace std;

bool check (int i)
{
    for (int j = 2; j <= sqrt(i); j++)
    {
        if (i % j == 0)
        {
            return 0;
        }
        
    }
     
    return 1;
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    

    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (check(i))
        {
            count++;
        }
        
        
    }
    
    cout<<count;
    return 0;
}
