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
        bit = num & 1;
        if (bit == 0)
        {
            bit = 1;
        }
        else {
            bit = 0;
        }
        ans = (bit * 10) + ans; 
        num =  num >>1;
        
    
    }
    
    int rem;  
    int a =0;
    
    while (ans != 0)
    {
      rem = ans % 10;
      ans = ans / 10;

      a = (rem * pow(2, i)) + a;
      i++;

    }
    cout<<a;
    
    return 0;
}
