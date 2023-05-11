#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 87;
    int b= 999;
    int c= 9999;

    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;

    cout<<"The value of a is : "<<setw(5)<<a<<endl;
    cout<<"The value of b is : "<<setw(5)<<b<<endl;
    cout<<"The value of c is : "<<setw(5)<<c<<endl;
    return 0;
}
