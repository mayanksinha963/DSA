#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {8,10,17,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e= n-1;
    int mid = (s+e)/2;
    while (s < e)
    {
        if (arr[mid] >= arr[0]) 
        {
            s= mid +1;
        }
        else {
            e = mid;
        }
        mid = (s+e)/2;
    }
    cout<<s;
    return 0;
}
