#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1;
    cout<<"Enter the number"<<endl;
    cin>>num1;

    if ((num1 & 1) == 0) 
    {
        cout<<"Even"<<endl;
    }
    else {
        cout<<"Odd"<<endl;
    }
    return 0;
}
