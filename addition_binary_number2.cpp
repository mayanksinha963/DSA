#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"Enter the first and second number ";
    cin>>num1>>num2;
    int rem=0;
    int ans = 0;
    int i  = 0;
    
    while (num1 != 0 || num2 != 0)
    {
        ans += (((num1 % 10 + num2 % 10) + rem) % 2) * pow(10, i); 
        cout<<ans<<endl;
        rem = ((num1 % 10 + num2 % 10) + rem) / 2;
        num1 = num1/10;
        num2 = num2/ 10;
        i++;
    }
    cout<<ans;

    return 0;
}
