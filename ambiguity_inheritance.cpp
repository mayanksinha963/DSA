#include<iostream>
using namespace std;

class A {
    public :
    void func()
    {
        cout<<"I am A"<<endl;
    }
};

class B {
    public :
    void func()
    {
        cout<<"I am B"<<endl;
    }
};

class C : public A, public B{

};

int main(int argc, char const *argv[])
{
    C hii;
    hii.A :: func();
    hii.B :: func();
    return 0;
}
