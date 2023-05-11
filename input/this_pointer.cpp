#include<iostream>
using namespace std;
class A 
{
    int a;
    public :
    A& setdata (int a)
    {
        this->a = a;
        return *this;
    }
    void getdata (void)
    {
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(int argc, char const *argv[])
{
    A a;
    a.setdata(4).getdata();
    return 0;
}
