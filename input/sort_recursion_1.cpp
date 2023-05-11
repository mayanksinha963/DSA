#include<iostream>
using namespace std;

bool check (int arr[], int size)
{
    if (size == 0 ||size == 1)
    {
        return true;
    }
    else if (arr[0] > arr[1])
    {
        return false;
    }
    else{
        check(arr +1, size-1);
    }
    
    
}

int main(int argc, char const *argv[])
{
    int arr[5]= {2,2,3,4,5};
    cout<<check(arr, 5);
    return 0;
}
