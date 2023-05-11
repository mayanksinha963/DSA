#include<iostream>
using namespace std;
class Base1 {
    protected :
    int base1;
    public :
    void set_base1int (int a)
    {
        base1= a;
    }
};

class Base2 {
    protected :
    int base2;
    public :
    void set_base2int (int a)
    {
        base2 = a;
    }
};

class Base3 {
    protected :
    int base3;
    public :
    void set_base3int (int a)
    {
        base3 = a;
    }
};
  class Base4 : public Base3, public Base2, public Base1 {
     protected :
     int base4;
     public :
     void sum (){
         base4 = base3 + base2 + base1;
         //cout<<base4<<endl;
     }
 };

 class Base5 : public Base4 {
     public :
     void display (void){
         //int base4 = base3 + base3 + base1;
         sum ();
         //cout<<base4<<endl;
         cout<<"Sum of base 1 + base 2 + base 3 is "<<base4 <<endl;
     }
 };

int main(int argc, char const *argv[])
{
    Base5 M;
    M.set_base1int(5);
    M.set_base2int(10);
    M.set_base3int(15);
    //M.sum();
    M.display();
    return 0;
}
