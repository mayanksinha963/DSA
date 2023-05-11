#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int k;
    int j = n;


    for (int i = n-1; i >= n-3; i--)
    {
        k = arr[i];
        while (j >0)
        {
            
            
            arr[j] = arr[j-1];
            cout<<arr[j]<<endl;
            j--;
        }
        arr[j] = k;
        j= n;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
