#include<iostream>
using namespace std;
//always start from right side
void print (int *arr, int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {0,1,2,3,4};
    print(arr,5);
    print(arr,5, 2);
    return 0;
}

