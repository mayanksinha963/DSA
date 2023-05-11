#include<iostream>
using namespace std;

class A{
    public :
    void sayHello ()
    {
        cout<<"Hii... Mayank Sinha from this Side"<<endl;
    }

    char sayHello (char name)
    {
        return name;
    }

    string sayHello (string name)
    {
        return name;
    }
};
int main(int argc, char const *argv[])
{
    A name;
    name.sayHello();
    cout<<name.sayHello('M')<<endl;
    cout<<name.sayHello("Mayank")<<endl;
    return 0;
}
