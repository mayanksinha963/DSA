#include<iostream>
using namespace std;
class Y;
class X {
    int data;
    public :
        int setValue (int value)
        {
            data = value;
            return data;
        }
        friend void add(X, Y);
};

class Y {
    int data;
    public :
        int setValue (int value)
        {
            data = value;
            return data;
        }
        friend void add(X, Y);
};

void add (X o1, Y o2)
{
    cout<<"Sum of the two number is "<<o1.data + o2.data;
};

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"For addition"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second numer"<<endl;
    cin>>num2;
    X a1;
    a1.setValue(num1);
    Y a2;
    a2.setValue(num2);
    add (a1, a2);

    
    return 0;
}
