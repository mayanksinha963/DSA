#include<iostream>
using namespace std;

long powerfast (long a, long b, int c)
{
    int res = 1;
    while (b > 0)
    {
        if((b & 1) != 0)
        {
            //Here res is smaller, so res %c is always equal to res;
            res = (res * a % c) %c;
        }
        a = (a%c * a %c) %c;
        b =  b>>1;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    long a, b;
    int c;
    cout<<"Enter the number ";
    cin>>a>>b>>c;
    cout<<powerfast(a, b, c);

    return 0;
}
