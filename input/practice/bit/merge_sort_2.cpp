#include<iostream>
using namespace std;

void merge(int *arr, int n, int low,int mid, int high)
{
    int *new_arr = new int [n];
    int i = low;
    int j = mid+1;
    int k = low;
    while (i <= mid && j<= high)
    {
        if (arr[i] < arr[j])
        {
            new_arr[k] = arr[i];
            i++;
            k++;
        }
        else{
            new_arr[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        new_arr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        new_arr[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = new_arr[i];
    }
    
    
    
    

}

void merge_sort(int *arr, int n, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high)/2;
        merge_sort(arr, n, low, mid);
        merge_sort(arr, n, mid +1, high);
        merge(arr, n, low, mid, high);

    }
    
}
int main(int argc, char const *argv[])
{
    int arr[]= { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, n, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
