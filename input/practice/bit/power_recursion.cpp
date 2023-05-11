#include<iostream>
using namespace std;

int power (int num1, int num2, int n)
{
    if (num2 == 1)
    {
        return num1;
    }
    
    num1 *= n;

    power(num1, num2-1, n);
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"Enter the number 1 and number 2 ";
    cin>>num1>>num2;
    int n = num1;
    cout<<power(num1, num2, n);    
    return 0;
}
