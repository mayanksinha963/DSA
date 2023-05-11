#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are eighteen"<<endl;
        break;
    
    case 20:
        cout<<"You are twenty"<<endl;
        break;
    case 30:
        cout<<"You are thirty"<<endl;
        break;
    
    default:
        cout<<"Please enter your valid age"<<endl;
        break;
    }
    return 0;
}

