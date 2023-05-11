#include<iostream>
using namespace std;
typedef struct employee {
    int id;
    char favchar;
    float salary;

}Ep;

int main(int argc, char const *argv[])
{
    Ep piyush;
    piyush.id = 1;
    piyush.favchar= 'P';
    piyush.salary= 1000000;
    cout<<piyush.id<<endl;
    cout<<piyush.favchar<<endl;
    cout<<piyush.salary<<endl;
    return 0;
}

