#include<iostream>
using namespace std;

inline int min (int &num1,int &num2)
{
    return (num1 < num2 ? num1 : num2);
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"Enter the number 1 :";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    cout<<min(num1, num2);
    return 0;
}
