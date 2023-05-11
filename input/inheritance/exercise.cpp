/*SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes*/
#include<iostream>
#include<cmath>
using namespace std;
class simple {
    
    public :
    int num1, num2;
    void setdata (int, int );
};
void simple :: setdata (int a, int b)
{

    num1 = a;
    num2 = b;
}

class process : public simple 
{
    public :
    void add (){
        cout<<"Sum of "<<num1<<" + "<<num2<<" is "<<num1 + num2<<endl;
    };
    void subtract (){
        cout<<"Subtraction of "<<num1<<" - "<<num2<<" is "<<num1 - num2<<endl;
    };

    void multipliation (){
        cout<<"Multiplication of "<<num1<<" x "<<num2<<" is "<<num1 * num2<<endl;
    }

    void division () {
        cout<<"Division of "<<num1<<" / "<<num2<< " is "<<num1/num2<<" and remaining remainder is "<<num1%num2<<endl;
    }
};

class calculator : public process
{
    public :
        void display (){
            cout<<"The value of cos(a) is "<<cos(num1)<<endl;
            cout<<"The value of sin(a) is "<<sin(num1)<<endl;
            cout<<"The value of exp(a) is "<<exp(num1)<<endl;
            cout<<"The value of tan(a) is "<<tan(num1)<<endl;
            cout<<"The value of cos(b) is "<<cos(num2)<<endl;
            cout<<"The value of sin(b) is "<<sin(num2)<<endl;
            cout<<"The value of exp(b) is "<<exp(num1)<<endl;
            cout<<"The value of tan(b) is "<<tan(num2)<<endl;
        }
};

class summary : public calculator
{
    public:
    void summary1 (){
        int a, b;
        cout<<"Enter the first number "<<endl;
        cin>>a;
        cout<<"Enter the second number "<<endl;
        cin>>b;
        setdata(a, b);
        add();
        subtract();
        multipliation();
        division();
        display();
    }
};
int main(int argc, char const *argv[])
{
    summary cal;
    cal.summary1();
    return 0;
}



