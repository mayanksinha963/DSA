#include<iostream>
using namespace std;

class animal {
    public:
    void speak ()
    {
        cout<<"Speaking"<<endl;
    }
};

class dog : public animal {
    public:
    void speak ()
    {
        cout<<"Barking"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    dog d;
    d.speak();
    return 0;
}
