#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, position;
    cout<<"Enter the number  : ";
    cin>>num1;
    cout<<"Enter the position : ";
    cin>>position;

    if (((num1 >> position-1) & 1) == 1 )  
    {
        cout<<1<<" is present at "<<position<<endl;
    }
    else 
    {
        cout<<0<<" is present at "<<position<<endl;
    }
    return 0;
}
