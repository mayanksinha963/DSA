#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 4;
    int* b= &a;

    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<a<<endl;
    return 0;
}
