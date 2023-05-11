#include<iostream>
using namespace std;

void merge (int A [], int low, int mid, int high)
{
    int i, j, k, B[7];
    i = low;
    j = mid +1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else 
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
         B[k] = A[i];
            i++;
            k++;
    }

    while (j <= high)
    {
         B[k] = A[j];
            j++;
            k++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
    
    
}

void merge_sort (int A [], int low, int high)
{
    int mid = (low + high) /2;
    if (low < high)
    {
        merge_sort (A, low, mid);
        merge_sort(A, mid +1, high);
        merge (A, low, mid, high);
    }
    
}

int main(int argc, char const *argv[])
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    merge_sort(A, 0 , 6);

    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}
