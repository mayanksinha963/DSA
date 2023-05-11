s#include<iostream>
using namespace std;
class base1 
{
    int data1;
    public :
    base1 (int i)
    {
        data1 = i;
        cout<<"Base1 constructor is called"<<endl;
    }
    void printbase1 (void)
    {
        cout<<"Value of Data1 is "<<data1<<endl;
    }
};

class base2
{
    int data2;
    public :
    base2(int i)
    {
        data2 = i;
        cout<<"Base2 constructor is called "<<endl;
    }
    void printbase2 (void)
    {
        cout<<"Value of Data2 is "<<data2<<endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;
    public :
    derived (int a, int b, int c, int d) : base1(a), base2 (b)
    {
    derived1 = c;
    derived2 = d;
    cout<<"Derived constructor is called"<<endl;
    }

    void printderived (void)
    {
        cout<<"Value of derived1 is "<<derived1<<endl;
        cout<<"Value of derived2 is "<<derived2<<endl;
    }
};



int main(int argc, char const *argv[])
{
    derived mayank (1,2,3,4);
    mayank.printbase1();
    mayank.printbase2();
    mayank.printderived();
    return 0;
}
