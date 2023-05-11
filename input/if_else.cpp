#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;

    cout<<"Enter your age"<<endl;
    cin>>age;
    //cout<<age;
    if (age<18)
    {
        cout<<"You are under age"<<endl;
    }
    else if (age==18)
    {
        cout<<"You are getting child pass"<<endl;
    }
    else 
    {
        cout<<"You are eligible"<<endl;
    }
    
    return 0;
}
