#include<iostream>
using namespace std;
class complex {
    private :
        int a;
        int b;
        friend complex sumcomplex (complex o1, complex o2);
    public :
        void setNumber (int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printNumber (void)
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex (complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(int argc, char const *argv[])
{
    complex c1,c2, sum;
    c1.setNumber(4,5);
    c1.printNumber(); 

    c2.setNumber (6,7);
    c2.printNumber();
    sum = sumcomplex(c1, c2);
    sum.printNumber();
    //cout<<sum;
    return 0;
}
