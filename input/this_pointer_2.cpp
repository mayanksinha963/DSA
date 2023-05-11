#include<iostream>
using namespace std;
class A {
    int a;
    public :
    void setdata (int a)
    {
        this ->a = a;
    }

    void getdata (void)
    {
        cout<<"Value of a is "<<a<<endl;
    }
};
int main(int argc, char const *argv[])
{
    A a1;
    a1.setdata(4);
    a1.getdata();
    return 0;
}
