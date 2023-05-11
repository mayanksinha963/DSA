#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public :
        Complex (int, int );
        void printnumber (void)
        {
            cout<<"Your number is "<<a<<" + "<<b;
        }
};

Complex :: Complex (int x, int y) 
{
    a = x;
    b = y;
};

int main(int argc, char const *argv[])
{
    //Implicit call
    Complex a (4,6);
    a.printnumber();
    cout<<"\n";
    //Explicit call;
    Complex b = Complex (4,7);
    b.printnumber();
    return 0;
}
