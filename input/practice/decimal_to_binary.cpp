#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int ans = 0;
    int bit;
    int i = 0;
    
    while (num != 0)
    {
     bit = num &1;
     num = num>>1;
     
     ans = (bit * pow(10, i) ) + ans;
     i++;
    }
    cout<<ans;
    return 0;
}
