#include<iostream>
using namespace std;
struct employee
{
    int id;
    char favChar;
    float salary;
};

int main (){
    //cout<<"Hello World"<<endl;
    struct employee mayank;
    mayank.id = 1;
    mayank.favChar = 'R';
    mayank.salary= 1200000000000;
    cout<<mayank.id<<endl;
    cout<<mayank.favChar<<endl;
    cout<<mayank.salary<<endl;


    return 0;
}