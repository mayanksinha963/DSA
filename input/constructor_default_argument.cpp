#include<iostream>
using namespace std;
class Simple {
    int a;
    int b;
    int c;
    public :
        Simple (int x = 5,int y = 10, int z = 15)
        {
            a = x;
            b = y;
            c = z;
        }
        void display ();
};

void Simple :: display () {
cout<<"Value of data 1, data 2, data 3 are "<<a<<" , "<<b<<" , "<<c;
};

int main(int argc, char const *argv[])
{
    Simple o1 (5);
    o1.display ();

    return 0;
}

