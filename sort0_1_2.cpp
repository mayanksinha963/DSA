#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 2, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = 0;
    
    int k = n - 1;
    cout<<k<<endl;
    while (i <= k)
    {
        if (arr[i] == 0)
        {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            j++;
            i++;
        }

        else if (arr[i] == 1)
        {
            i++;
        }
        else if (arr[i] == 2)
        {

            arr[i] = arr[i] ^ arr[k];
            arr[k] = arr[i] ^ arr[k];
            arr[i] = arr[i] ^ arr[k];
            k--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
