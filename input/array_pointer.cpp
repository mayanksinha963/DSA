#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks[]= {43,64,97};
    int* p = marks;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    return 0;
}
