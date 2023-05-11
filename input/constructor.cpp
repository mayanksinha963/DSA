#include<iostream>
using namespace std;

class Complex 
{
    int a, b;
    public :
        Complex (void);
        void display (void)
        {
            cout<<"Real part of the complex number is "<<a<<" and imaginary part of the complex number is "<<b<<"i";
        }
};
Complex :: Complex (void){
    cout<<"Enter the real part of the complex number"<<endl;
    cin>>a;
    cout<<"Enter the complex part of the complex number"<<endl;
    cin>>b;
};
int main(int argc, char const *argv[])
{
    Complex c1;
    c1.display();
    return 0;
}
