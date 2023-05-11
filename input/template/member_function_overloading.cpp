#include<iostream>
using namespace std;
template <class T>
void func (T a)
{
cout<<"I am templatised func ()"<<endl;
}

int func (int a)
{
    cout<<"I am first func()"<<a<<endl;
}

int main(int argc, char const *argv[])
{
    func(4);
    
    return 0;
}
