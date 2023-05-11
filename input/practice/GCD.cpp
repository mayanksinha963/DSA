#include<iostream>
using namespace std;

int gcd (int a, int b)
{
    if (b==0)
    {
        return a;
    }
   return gcd(b, a%b);
    
}

int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Enter the number ";
    cin>>a>>b;

    cout<<"GCD is "<<gcd(a, b);

    return 0;
}
