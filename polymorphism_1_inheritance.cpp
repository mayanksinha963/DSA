#include<iostream>
using namespace std;

class B {
    public :
    int a;
    // int b;

    // int add()
    // {
    //     return a+b;
    // }

    void operator+ (B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Subtaction "<<value1- value2<<endl;
    }
};

int main(int argc, char const *argv[])
{
    B obj1, obj2;
    obj1.a = 7;
    obj2.a = 4;
    obj1 + obj2;
    return 0;
}
