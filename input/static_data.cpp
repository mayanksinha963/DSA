#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
public :
    void setdata (void) {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count ++;
    }
    void getdata (void)
    {
        cout<<"The id of the emoloyee is "<<id<<" and the number of the employee is "<<count<<endl;
    }
    static void getcount (void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee :: count=100;

int main(int argc, char const *argv[])
{
    Employee Mayank;
    Mayank.setdata ();
    Mayank.getdata ();
    Employee :: getcount();
    return 0;
}
