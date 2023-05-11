#include<iostream>
using namespace std;

long longpower (long a, long b)
{
    int res = 1;
    while (b >  0)
    {
        if ((b&1) != 0)
        {
            res = res *a;
        }
        a = a * a;
        b = b >> 1;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    long a;
    long b;
    cout<<"Enter the number ";
    cin>>a>>b;
    cout<<endl;
    cout<<longpower(a, b);

    return 0;
}
