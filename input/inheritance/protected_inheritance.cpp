#include<iostream>
using namespace std;
class base {
    protected :
    int a = 5;
    public :
    int b= 10;

};

class derived : protected base {
    public :
    void display (){
        cout<<"The value of a is : "<<a<<endl;
    }

};
int main(int argc, char const *argv[])
{
    derived der;
    der.display();
    return 0;
}
