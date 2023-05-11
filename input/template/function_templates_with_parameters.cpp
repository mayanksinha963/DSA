#include<iostream>
using namespace std;
template<class T1, class T2>
float funcAverage (T1 a, T2 b)
{
    float avg= (a + b)/2;
    return avg;
}

template <class T>
void swapp (T &a, T&b)
{
    T temp = a;
    a = b;
    b= temp;
}

int main(int argc, char const *argv[])
{
    float a;
    a = funcAverage (4.5 , 9.5);
    cout<<"The Average of the number is "<<a<<endl;
    int x= 5, y= 7;
    swapp (x,y);
    cout<<"Value of x and y is "<<x<<" and "<<y<<endl;

    return 0;
}
