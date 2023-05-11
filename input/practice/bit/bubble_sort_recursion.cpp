#include<iostream>
using namespace std;
void bubble (int *arr, int n)
{
    if (n== 1 || n== 0)
    {
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[0] > arr[i])
        {
        arr[0] = arr[0] ^ arr[i];
        arr[i] = arr[0] ^ arr[i];
        arr[0] = arr[0] ^ arr[i];
        bubble(arr, n);
        }
        
    }
    
    {
        
    }
    bubble(arr+1, n-1);
    
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 5, 1, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
