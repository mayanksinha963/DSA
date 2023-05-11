#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;

}

void swapref(int &a, int &b)
{
    int temp;
    temp= a;
    a = b;
    b= temp;
}


int main(int argc, char const *argv[])
{
    int a= 4;
    int b= 5;
    cout<<"Before swapping"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"\n\n";
    swap(&a, &b);
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    //Call by reference by using C++ refrence varaiable.
    int x= 6;
    int y= 9;

    cout<<"Before swapping"<<endl;
    cout<<"The value of x is " <<x<<endl;
    cout<<"The value of y is " <<y<<endl;
    cout<<"\n\n";
    swapref(x, y);
    cout<<"The value of x is " <<x<<endl;
    cout<<"The value of y is " <<y<<endl;
    
    
    return 0;
}
