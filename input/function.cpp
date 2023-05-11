#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c= a + b;
    return c;
}
int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum of the number is : "<<sum(num1, num2)<<endl;
    cout<<"Thanks for spenting time on my program"<<endl;
    
    return 0;
}
