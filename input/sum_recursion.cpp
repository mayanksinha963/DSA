#include<iostream>
using namespace std;

int total(int arr[], int size, int &sum)
{
    if (size == 0)
    {
        return sum;
    }
    sum += arr[0];

    total(arr +1, size-1, sum);
    
}

int main(int argc, char const *argv[])
{
    int arr[5]= {3,2,1,5,6};
    int sum = 0;
    cout<<total(arr, 5, sum);
    return 0;
}
