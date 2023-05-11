#include<iostream>
#include<string>
#include "oops_hero.cpp"
using namespace std;

class second 
{
    private :
    int health;
    char level;
    char *name;
    public :
    second ()
    {
        name = new char[100];
    }

    second (int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void print ()
    {
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }

    second sethealth (int health)
    {
        this->health= health;
    
    }
    second setlevel (char level)
    {
        this->level= level;
    
    }
    void setname (char name[])
    {
       this->name= name;
    
    }

    // second (second &temp)
    // {
    //     cout<<"Copy Constructor called "<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
   
};
int main(int argc, char const *argv[])
{
    // hero h1;
    // cout<<sizeof(h1)<<endl;
    // second may;
    // second *m = new second();
    
    // second s(10);
    // cout<<"Address of second is "<<&s<<endl;
    // second R(100, 'M');
    // R.print();
    // second Mayank(R);
    // Mayank.print();

    // second S(R);
    // S.print();

    second hero1;
    hero1.sethealth(100);
    hero1.setlevel('R');
    char name[8] = "Mayank";
    hero1.setname(name);
    hero1.print();

    second hero2 (hero1);
    hero2.print();




    return 0;
}
