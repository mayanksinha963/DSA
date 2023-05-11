#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int n = num -1;
    int j = pow(10,n);
    for (int i = j; i <= (j*10) - 1; i++)
    {
        cout<<i<<"  ";
    }
    
    return 0;
}
