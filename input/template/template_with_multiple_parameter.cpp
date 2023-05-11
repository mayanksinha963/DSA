#include<iostream>
using namespace std;
template <class T1, class T2>
class myClass {
    public :
    T1 Data1;
    T2 Data2;

    myClass (T1 a, T2 b)
    {
        Data1 = a;
        Data2 = b;
    }

    void display ()
    {
        cout<<Data1<<" "<<Data2;
    }
};

int main(int argc, char const *argv[])
{
    myClass<int, char> obj(4, '5');
    obj.display();
    return 0;
}
