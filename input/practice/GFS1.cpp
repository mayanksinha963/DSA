#include<iostream>
#include<cmath>
using namespace std;

int number (int num)
{
    int n = num -1;
    int j = pow (10, n);
    int a ;
    int b;
    int c;
    for (int i = j; i <= (j*10) - 1; i++)
    {
        c = i;
        a = c % 10;
        b = c/10;
        if (a>b)
        {
            cout<<i<<endl;
        }        
    } 
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    number (num);
    return 0;
}
