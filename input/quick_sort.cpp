#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[j] = arr[i];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    // cout<<j<<endl;
    return j;
}
void quicksort(int arr[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        // cout<<partitionIndex - 1<<endl;
        quicksort(arr, low, partitionIndex - 1);
        quicksort(arr, partitionIndex + 1, high);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {9, 4, 4, 8, 7, 5, 6};
    int n = 7;
    printarray(arr, n);
    quicksort(arr, 0, n - 1);
    printarray(arr, n);
    return 0;
}
