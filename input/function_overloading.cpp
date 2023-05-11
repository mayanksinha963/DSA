#include<iostream>
using namespace std;

int sum (int a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a + b;
}

int sum (int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a + b + c;
}

//Volume  of cylinder
float volume(double r, int h)
{
    return 3.14*r*r*h;
}

//Volume of cube
int volume (int a)
{
    return a*a*a;
}

//Volume of rectangle
int volume (int l, int b, int h){
    return l*b*h;
}
int main(int argc, char const *argv[])
{
    int a= 4;
    int b = 5;
    cout<<"Sum of a and b is "<<sum(a,b)<<endl;
    int c = 7;
    cout<<"Sum of a, b and C is "<<sum(a,b,c)<<endl;   

    cout<<"Volume of cylinder of radius 5 and height 7 is "<<volume(5,7)<<endl;
    cout<<"Volume of cube of side 5 is "<<volume(5)<<endl;
    cout<<"Volume if rectangle of length 5, breath 6 and height 7 is "<<volume(5,6,7)<<endl;

    return 0;
}
