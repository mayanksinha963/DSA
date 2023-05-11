#include<iostream>
using namespace std;
class complex {
    int real, imaginary;
    public :
    void setdata (int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata (void)
    {
        cout<<"Real part of complex is "<<real<<endl;
        cout<<"Complex part of complex is "<<imaginary<<endl;
    }


};

int main(int argc, char const *argv[])
{
    complex c1;
    c1.setdata(4,5);
    c1.getdata();
    cout<<"\n";
    
    complex *ptr = &c1;
    (*ptr).setdata(4,5);
    (*ptr).getdata();
    cout<<"\n";

    complex *pointer = new complex;
    (*pointer).setdata(4,5);
    (*pointer).getdata();
    cout<<"\n";

    pointer->setdata(4,5); // same as (*pointer).setdata(4,5)
    pointer->getdata(); //same as (*pointer).getdata()
    return 0;
}
