#include<iostream>
using namespace std;

int c = 45;
int main(int argc, char const *argv[])
{
    int a, b,c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : \n";
    cin>>b;
    cout<<"The value of a + b is "<< a+b;
    c= a + b;
    cout<<"\nThe global value of c is "<<::c;
    return 0;
}
