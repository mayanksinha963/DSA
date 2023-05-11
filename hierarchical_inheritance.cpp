#include<iostream>
using namespace std;

class A
{
    public :
    void func1 ()
    {
        cout<<"Calling function A"<<endl;
    }
};

class B : public A 
{

};

class C : public A
{

};

int main(int argc, char const *argv[])
{
    A func;
    func.func1();
    B func2;
    func2.func1();
    C func3;
    func3.func1();
    return 0;
}
