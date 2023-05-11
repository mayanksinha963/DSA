#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum Meal {Breakfast, Lunch, Dinner};
    Meal m1= Dinner;
    cout<<m1<<endl;
    cout<<"\n\n"<<endl;

    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;
    
    return 0;
}
