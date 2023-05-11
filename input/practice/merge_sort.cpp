#include<iostream>
using namespace std;

void merge(int arr[], int low, int medium, int high, int size)
{
    cout<<low<<" "<<high<<endl;
    int arrd [size];
    int i= low;
    int j = medium +1;
    int k = low;

    while (i <= medium && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            arrd[k] = arr[i];
            i++;
            k++;
        }
        else {
            arrd[k] = arr[j];
            j++;
            k++;
        }
        
    }
    while (i <= medium)    
    {
        arrd[k] = arr[i];
        i++;
        k++;
    }

    while (j<=high)
    {
        arrd[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        
        arr[i] = arrd[i];
    }
    
        
    
}

void mergesort(int arr[], int low, int high, int size)
{
    int medium = (low + high) /2;
    if(low < high)
    {
        mergesort(arr, low, medium, size);
        mergesort(arr, medium +1, high, size);
        merge(arr, low, medium, high, size);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3,5,1,65,97,23};
    int n = (sizeof arr/sizeof arr[0])-1;

    mergesort(arr, 0, n, n);

    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
