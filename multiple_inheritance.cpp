#include<iostream>
using namespace std;

class animal {
    public :
    int age;
    void bark ()
    {
        cout<<"Barking"<<endl;
    }
};

class human {
    public :
    void speak ()
    {
        cout<<"Speaking"<<endl;
    }
};

class Hybrid : public animal, public human
{

};


int main(int argc, char const *argv[])
{
    Hybrid h;
    h.bark();
    h.speak();
    return 0;
}
