#include<iostream>
using namespace std;

int factorial (int fac)
{
    if (fac <= 1 )
    {
        return 1;
    }
    
    return fac * factorial (fac-1);
}

int main(int argc, char const *argv[])
{
    int fac;
    cout<<"Enter the factorial"<<endl;
    cin>>fac;
    int num = factorial(fac);
    int res=0;
    
    for (int i = 5; i <= num; i= i*5)
    {
        
        res = res + fac/i;
    }
    cout<<res;
    return 0;
}
