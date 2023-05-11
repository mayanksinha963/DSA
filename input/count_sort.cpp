#include<iostream>
using namespace std;

void count (int arr[], int n)
{
    int a= 0;
    for (int i = 0; i < n; i++)
    {
        a = max(a, arr[i]);
    }
    
int b[9];
    for (int i = 0; i <= 9; i++)
    {
        b[i] = 0;
    }
   
int c;
for (int i = 0; i < n; i++)
{
    c = arr[i];
    b[c]++;
}

int d[n];
int j = 0;
for (int i = 0; i <= 9; i++)
{
    if (b[i] != 0)
    {
        while (b[i] != 0)
        {
            d[j] = i;
            b[i]--;
            j++;
        }
        
    }
    
}
for (int i = 0; i < n; i++)
{
    arr[i] = d[i];
}

}

void printarray (int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {3,1,9,7,1,2,4};
    int n = 7;
    count (arr, n);
    printarray (arr, n);
    return 0;
}
