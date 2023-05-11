#include<iostream>
using namespace std;
class Base1 {
    public :
    void say () {
        cout<<"Hello World"<<endl;
    }
};
// D's new say() method will override base class's say() method
class Base2 : public Base1 {
    public :
    void say () {
        cout<<"Hello my beautiful people"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Base2 m;
    m.say();
    return 0;
}
