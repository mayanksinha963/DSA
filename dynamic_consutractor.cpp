#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit(){

    };

    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

Bankdeposit :: Bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
     
}
void Bankdeposit :: show () {
    cout<<endl<<"Prinicipal amount was "<<principal;
    cout<<". Return value after "<<year;
    cout<<" year is "<<returnvalue<<endl;
}

int main(int argc, char const *argv[])
{
    
    Bankdeposit b1, b2, b3;
    int p, y;
    float R;
    int r;
    cout<<"Enter the value of principal, year, interest rate :"<<endl;
    cin>>p>>y>>R;
    b1 = Bankdeposit(p, y, R);
    b1.show();

    cout<<"Enter the value of principal, year, interest rate :"<<endl;

    cin>>p>>y>>r;
    b2 = Bankdeposit(p, y, r);
    b2.show();
    return 0;
}
