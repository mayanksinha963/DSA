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

class dog : public animal{

};

int main(int argc, char const *argv[])
{
    dog d;
    d.speaking();
    return 0;
}
