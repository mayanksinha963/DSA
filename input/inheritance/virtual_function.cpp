#include<iostream>
using namespace std;
class BaseClass 
{
    public :
    int varbase = 1;
    virtual void display ()
    {
        cout<<"1. Displaying Base class variable varbase "<<varbase<<endl;
    }
};

class DerivedClass : public BaseClass
{
    public :
    int varderived =2;
    void display ()
    {
        cout<<"2. Displaying Base class variable varbsase "<<varbase<<endl;
        cout<<"2. Displaying Derived class variable varderived "<<varderived<<endl;
    }
};

int main(int argc, char const *argv[])
{
    BaseClass *base_class_pointer;
    DerivedClass derivedobj;
    base_class_pointer = &derivedobj;
    base_class_pointer->display();
    return 0;
}
