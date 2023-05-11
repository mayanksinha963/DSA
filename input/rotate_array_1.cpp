#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp [n];
    int key = 3;
    for (int i = 0; i < n; i++)
    {
        temp[(i+key)%n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}
