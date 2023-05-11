#include<iostream>
using namespace std;
union money{
    int rice;
    int car;
    int house;
};

typedef union amount{
    int office;
    int road;
    int lemborgani;
}Am;

int main(int argc, char const *argv[])
{
    union money mayank;
    mayank.rice = 50;
    mayank.car= 200000;
    cout<<mayank.car<<endl;

    Am Pratyush;
    Pratyush.road = 6000000;
    cout<<Pratyush.road<<endl;
}
