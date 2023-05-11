#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == 0)
        {
            i++;
        }
        else
        {

            if (arr1[i] > arr2[j])
            {
                arr3[k] = arr2[j];
                j++;
            }
            else if (arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                i++;
            }
            else
            {
                arr3[k] = arr1[i];
                i++;
            }
            k++;
        }
    }
    while (j<m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 0, 0, 0};
    int arr2[] = {2, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == 0)
        {
            count++;
        }
        
    }
    //cout<<count;
    
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int z = n + m- count;
    int arr3[z];
    merge(arr1, n, arr2, m, arr3);
    int i = 0;
    while (i<z)
    {
        cout<<arr3[i]<<endl;
        i++;
    }
    
    return 0;
}
