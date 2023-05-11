#include<iostream>
using namespace std;

int count = 0;
class num {
    public :
    num (){
        count ++;
        cout<<"This is the time when the constructor is called for the object"<<count<<endl;
    };
    ~num (){
        cout<<"This is the time when destructor is called for the object"<<count<<endl;
        count --;
    }

};
int main(int argc, char const *argv[])
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating the first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more blocks"<<endl;
    num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to the main"<<endl;
    return 0;
}
