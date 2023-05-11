#include<iostream>
using namespace std;
void getnonrepeating(int arr[], int n, int *x, int *y)
{
    int Xor = 0;
    int setbit;
    *x = 0;
    *y = 0;
    for (int i = 0; i < n; i++)
    {
        Xor ^= arr[i];
    }
    setbit = Xor & ~(Xor-1);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & setbit)
        {
            *x = *x ^ arr[i];
        }
        else {
            *y = *y ^ arr[i];
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[8] = {5,4,1,4,5,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *x= new int[sizeof(int)];
    int *y= new int[sizeof(int)];
    getnonrepeating(arr, n, x, y);
    cout<<"The non repeating element are "<<*x<<" and "<<*y;
    return 0;
}
