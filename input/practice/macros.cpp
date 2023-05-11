#include<iostream>
using namespace std;

#define PI 3.14

int main(int argc, char const *argv[])
{
    int r;
    cout<<"Enter the radius : ";
    cin>>r;
    double area;
    area = PI *r *r;
    cout<<"Area of circle is "<<area;
    return 0;
}
