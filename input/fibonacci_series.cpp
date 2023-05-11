#include<iostream>
using namespace std;
int fibonacci(int num)
{
    if (num<=2)  
    {
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
    
}
int main(int argc, char const *argv[])
{
    int a;
    cout<<"Enter a number to find a fibonacci series"<<endl;
    cin>>a;
    cout<<"Fibonacci of number is "<<fibonacci(a)<<endl;
    return 0;
}
