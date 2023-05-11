#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marks[]= {43,97,53};
    cout<<marks[1]<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<marks[i]<<endl;
    }
    for (int i = 0; marks != 0; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    
    return 0;
}