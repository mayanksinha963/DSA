#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    char c = 65;
   

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout<<char(65+i)<<" ";
        }
        cout<<endl;
    }


cout<<endl;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i = 0; i < num; i++)
    {
        char d = 65 + i;
        for (int j = 0; j < num; j++)
        {
            cout<<d<<" ";
            d++;
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;
}
