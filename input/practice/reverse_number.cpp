#include<iostream>
#include<cmath>
using namespace std;

int reverse (int num)
{
    int ans= 0;
    int bit;
    int i = 0;
    while (num != 0)
    {
        bit= num % 10;
       
        
        num = num /10;
        ans = (ans * 10) + bit;
        
        
        i++;

    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int a = reverse(num);
    if (a > pow(-2, 31) & a < pow (2, 31) -1)
    {
        cout<<a;
    }
    else
    {
        return 0;
    }
    
    return 0;
}
