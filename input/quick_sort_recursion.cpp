#include<iostream>
using namespace std;

int quick(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (pivot > arr[i])
        {
            cnt++;
        }
        
    }
    
    int pivotIndex = s + cnt;
    cout<<arr[s]<<" "<<arr[pivotIndex]<<" ";
    swap(arr[s], arr[pivotIndex]);
    
    cout<<arr[s]<<endl;

    int i =s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
        
    }
    return pivotIndex;
    
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return; 
    }
    int p = quick(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
    
    
}

int main(int argc, char const *argv[])
{
    int arr[]= {9, 4, 4, 8, 7, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
