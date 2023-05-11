#include<iostream>
using namespace std;
class c1 {
    int num1;
    int num2;
    public:
        void indata1 (int a)
        {
            num1 = a;
        }
        void indata2 (int b)
        {
            num2 = b;
        }
        void display1 (void) {
            cout<<num1;
        }
        void display2 (void) {
            cout<<num2;
        }
        friend void exchange (c1 &, c1 &);
};
void exchange (c1 &x, c1 &y)
{ 
    int temp; 
    temp = x.num1;
    x.num1= y.num2;
    y.num2 = temp;
};

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<< endl;
    cin>>num2;
    c1 x,y;
    x.indata1(num1);
    y.indata2(num2);
    exchange(x,y);
    cout<<"The value of first number is ";
    x.display1 ();
    cout<<" and the value of second number is ";
    y.display2();
    return 0;
}
