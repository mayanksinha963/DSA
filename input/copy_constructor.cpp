#include<iostream>
using namespace std;
class Number {
    int a;
    public :
        Number () {
            a = 0;
        }

        Number (int num){
            a = num;
        }

        // Number (Number &obj)
        // {
        //     cout<<"Copy constructor called !!"<<endl;
        //     a = obj.a;
        // }
        void display () {
            cout<<"The number of this object is "<<a<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Number x,y, z(45);
    z.display();
    Number z1  (z);
    z1.display();
    Number z2 = z;
    z.display ();
    return 0;
}
