#include<iostream>
using namespace std;

class Base1{
    public :
        void greet ()
        {
            cout<<"How are you"<<endl;
        }
};
class Base2 {
    public :
    void greet ()
    {
        cout<<"Kaise ho"<<endl;
    }
};

class Base3 :public Base2, public Base1 {
    public :
    void greet ()
    {
        Base2 :: greet();
    }
};
int main(int argc, char const *argv[])
{
    Base3 m;
    m.greet();
    return 0;
}
