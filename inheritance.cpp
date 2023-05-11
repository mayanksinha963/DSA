#include<iostream>
using namespace std;

class Human {
    private :
    int age;
    int weight;
    int height;
    protected :
    int iq;
    public:
    int getage (int age)
    {
        return this->age = age;
    }

    int getweight (int weight)
    {
        return this->weight = weight;
    }

    int getheight (int getheight)
    {
        return this->height= height;
    }
};

class Male : public Human
{
    public :
    string colour = "Red";
    void sleep ()
    {
        cout<<"Male Sleeping "<<endl;
    }
    int getiq(int iq)
    {
        return this->iq = iq;
    }
};


int main(int argc, char const *argv[])
{
    Male object1;
    cout<<object1.getage(18)<<endl;
    cout<<object1.getheight(5.5)<<endl;
    cout<<object1.getweight(60)<<endl;
    cout<<object1.colour<<endl;
    cout<<object1.getiq(175)<<endl;
    
    object1.sleep();
    return 0;
}
