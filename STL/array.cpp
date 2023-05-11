#include<iostream>
#include<array>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    cout<<"Array size "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"Element or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
    return 0;
}
