#include<iostream>
using namespace std;

bool check (int arr[], int n, int pos)
{
    if (pos == n)
    {
        return true;
    }
    
    if (arr[pos]>=arr[pos-1])
    {
        check(arr, n, pos +1);
    }
    
    else{
        return false;
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {2,2,6,9,11};
    cout<<check(arr, 5, 1);
    return 0;
}
