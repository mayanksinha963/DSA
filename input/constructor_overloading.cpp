#include<iostream>
using namespace std;

class Complex 
{
    int a, b;
    public :
        Complex (int x, int y)
        {
            a = x;
            b = y;
        }
        Complex (int x)
        {
            a = x;
        }
        void display (void)
        {
            cout<<"The real part of complex is "<<a<<" and the imaginary part of the complex is "<<b<<"i";
        }
        Complex ()
        {
            a= 0;
            b = 0;
        }
};
int main(int argc, char const *argv[])
{
    Complex c1 (4,6);
    c1.display();
    cout<<"\n";
    Complex c2 (5);
    c2.display();
    cout<<"\n";
    Complex c3;
    c3.display();
    
    
    return 0;
}
