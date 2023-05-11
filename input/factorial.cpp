#include<iostream>
using namespace std;
int factorial (int a){
    if (a<=1)
    {
        return 1;
    }
    return a * factorial(a-1);
    
}
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter a number to calculate factoral"<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}
