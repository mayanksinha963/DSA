#include<iostream>
using namespace std;
class BaseClass 
{
    public :
    int var_base;
    void display ()
    {
        cout<<"Displaying base class variable var_class "<< var_base<<endl;
    }
};

class DerivedClass : public BaseClass 
{
    public :
    int var_derived;
    void display () 
    {
        cout<<"Displaying base class variable var_class "<< var_base<<endl;
        cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
    }
};
int main(int argc, char const *argv[])
{
    BaseClass * base_class_pointer;
    BaseClass objbase;
    DerivedClass objderived;
    base_class_pointer = &objderived;
    (*base_class_pointer).var_base = 300;
    (*base_class_pointer).display();

    base_class_pointer->var_base = 24;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    //DerivedClass objderived;
    derived_class_pointer = &objderived;
    (*derived_class_pointer).var_derived =500;
    (*derived_class_pointer).display();

    derived_class_pointer->var_derived= 300;
    derived_class_pointer->display();

    return 0;
}
