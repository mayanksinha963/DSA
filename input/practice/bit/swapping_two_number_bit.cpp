#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    cout<<"Num 1 : "<<num1<<endl;
    cout<<"Num 2 : "<<num2<<endl;
    cout<<endl;
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    cout<<"Num 1 : "<<num1<<endl;
    cout<<"Num 2 : "<<num2<<endl;
    return 0;
}
