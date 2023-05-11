#include<iostream>
using namespace std;

#define MAX 500

int multiply (int x, int res[], int res_size)

int factorial(int num)
{
    int res[MAX];
    int res[0] = 1;
    int res_size= 1;
    for (int x = 0; x <= num; x++)
    {
        res_size = multiply(x, res, res_size);
    }
    
}

int multiply (int x, int res[], int res_size)
{
    int carry = 0;
    int product;
    for (int i = 0; i < res_size; i++)
    {
        product = res[i] * x + carry;

    }
    
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number ";
    cin>>num;

    factorial(num);
    return 0;
}
