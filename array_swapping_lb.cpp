#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[5] = {0,1,2,3,4};
    int j = 0;
    for (int i = 0; i < 5; i+=2)
    {
        j = i +1;
        if (j<5)
        {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
