#include<iostream>
using namespace std;

class hero {
    public :
    hero ()
    {
        cout<<"Constructor called "<<endl;
    }
    ~hero()
    {
        cout<<"Desconstructor called "<<endl;
    }

    static int Time;
    static int random()
    {
        return Time;
    }

    
};

int hero ::Time = 10;

int main(int argc, char const *argv[])
{
    hero hi;
    hero *hii = new hero();
    delete hii;
    cout<<hero::Time<<endl;
    cout<<hero::random()<<endl;

    return 0;
}
