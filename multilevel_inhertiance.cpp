#include<iostream>
using namespace std;

class animal {
    public :
    int age;
    void speaking ()
    {
        cout<<"Speaking"<<endl;
    }
};

// class dog : public animal{

// };

class dog :protected animal{

};
class pug : public dog{
    public :
    void talk ()
    {
        speaking();
    }
};
int main(int argc, char const *argv[])
{
    pug d;
    //d.speaking();
    d.talk();
    return 0;
}
