#include<iostream>
using namespace std;

int findunique (int arr[], int n, int k)
{
    int INT_SIZE = 8 * sizeof(arr[0]);
    int count [INT_SIZE];
    for (int i = 0; i < INT_SIZE; i++)
    {
        count[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if ((arr[j] & (1 << i)) != 0)   
            {
                count[i] += 1;
               
            }
          
        }
        
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        
        res += (count[i] % k ) * (1 << i);
        
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[] = { 6, 2, 5, 2, 2, 6, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<findunique(arr, n, k);
    return 0;
}
