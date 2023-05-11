#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void check_bin(void);
public :
    void read (void);
    void ones_compliment(void);
    void display (void);
    //void one(void);
};
void binary :: read (void)
{
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}

void binary :: check_bin(void)
{
    for (int i = 0; i < s.length (); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')   
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void binary :: ones_compliment(void)
{
    check_bin();
    for (int i = 0; i < s.length (); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    
}

void binary :: display (void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
int main(int argc, char const *argv[])
{
    binary b;
    b.read();
    //b.one();
    b.ones_compliment();
    b.display();



    return 0;
}
