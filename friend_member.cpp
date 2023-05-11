#include <iostream>
using namespace std;
class complex;
class calculator
{
    public :
    // int add (int a, int b)
    // {
    //     return (a + b);
    // }
    int sumrealcomplex(complex, complex);
    int sumimaginarycomplex(complex, complex);
};
class complex
{
    // private :
    //     int a, b;
public:
    
      int a;
      int b;
     int setNumber (int n1, int n2){
         a = n1;
         b = n2;
     }
    void printNumber ()
    {
        cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
    };
    friend int calculator :: sumrealcomplex(complex, complex);
};
int calculator :: sumrealcomplex (complex o1, complex o2){
    return (o1.a + o2.a);
};
int calculator :: sumimaginarycomplex (complex o1, complex o2){
    return (o2.a + o2.b);
}

int main(int argc, char const *argv[])
{
    complex o1,o2;
    o1.setNumber(4,5);
    o1.printNumber();
    o2.setNumber(6,7);
    o2.printNumber();
    calculator calc;
    int res;
    res = calc.sumrealcomplex(o1,o2);
    cout<<"Sum of the real part of complex number is "<<res;
    int resi = calc.sumimaginarycomplex(o1,o2);
    cout<<"Sum of the imaginary part of complex number is "<<resi;
    

    return 0;
}
