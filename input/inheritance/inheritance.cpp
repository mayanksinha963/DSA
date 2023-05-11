#include<iostream>
using namespace std;
class Employee 
{
    public :
    int id;
    float salary;
    Employee (int inpId){
        id = inpId;
        salary = 34.0;
    }
    Employee (){};
};

class programmer : public Employee{
    public :
    int languagecode;
    programmer (int inpId)
    {
        id = inpId;
        languagecode = 9;
    }

    void getdata () {
        cout<<"Value of your id is "<<id<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Employee Mayank(4);
    cout<<Mayank.id<<endl;
    cout<<Mayank.salary<<endl;

    programmer skillF (5);
    cout<<skillF.id<<endl;
    cout<<skillF.languagecode<<endl;
    skillF.getdata ();

    return 0;
}
