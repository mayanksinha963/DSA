#include<iostream>
using namespace std;
class Test1 {
    public :
    int x, y;
    Test1 (int x1, int y1) : x(x1), y(y1)
    {
        cout<<"Test1 is executed"<<endl;
        cout<<"Value of x1 is "<<x<<endl;
        cout<<"Value of x2 is "<<y<<endl;
    }
};

class Test2 {
    public :
    int x, y;
    Test2 (int x1, int y1) : x(x1), y(y1 + x1)
    {
        cout<<"Test2 is executed"<<endl;
        cout<<"Value of x1 is "<<x<<endl;
        cout<<"Value of x2 is "<<y<<endl;
    }
};

class Test3 {
    public :
    int x, y;
    Test3 (int x1, int y1) : x(x1), y(x + y1)
    {
        cout<<"Test3 is executed"<<endl;
        cout<<"Value of x1 is "<<x<<endl;
        cout<<"Value of x2 is "<<y<<endl;
    }
};



int main(int argc, char const *argv[])
{
    cout<<"Hello World"<<endl;
    Test1 a(4,5);
    cout<<"\n"<<endl;
    Test2 b(4,5);
    cout<<"\n"<<endl;
    Test3 c(5,6);

    return 0;
}
