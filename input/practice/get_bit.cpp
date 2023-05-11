#include<iostream>
using namespace std;
void additional (int num1, int num2)
{
    int rem = 0;
    int sum[20];
    int i = 0;

    while (num1 != 0 || num2 != 0)
    {
        sum[i++] = (num1 % 10 + num2 % 10 + rem) % 2;
        rem = (num1 % 10 + num2 % 10 + rem) / 2;
        num1 = num1/10;
        num2 = num2/10;
    }

    if (rem != 0)
    {
        sum[i++] = rem;
        
    }
    --i;
    while (i >= 0 )
    {
        cout<<sum[i--];
    }
    
    
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    num1= 101;
    num2 = 111;
    additional(num1, num2);

    return 0;
}
