#include<iostream>
using namespace std;

#define AREA(l, b) (l*b)

int main(int argc, char const *argv[])
{
    int l, b;
    cout<<"Enter the length and breadth : ";
    cin>>l>>b;
    int area = AREA(l, b);
    cout<<area;   

    
    return 0;
}
