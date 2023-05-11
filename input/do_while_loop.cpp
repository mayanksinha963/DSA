#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter number to get counting number from zero"<<endl;
    cin>>num;
    int i=0;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=num);
    
    return 0;
}
