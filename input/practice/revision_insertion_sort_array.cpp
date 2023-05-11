#include<iostream>
using namespace std;
void insertion(int *arr, int size)
{
    int key, j;
    for (int i = 1; i <= size-1 ; i++)
    {
        key = arr[i];
        j = i-1;
        while (j>= 0 && arr[j] < key)
        {
            arr[j+1] = arr [j];
            j--;
        }
        arr[j+1] = key;
    }
    
}
int main(int argc, char const *argv[])
{
    int arr []= {56,998,56,45,9,56};
    int size = sizeof(arr)/sizeof(int);
    //cout<<size;
    insertion(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
