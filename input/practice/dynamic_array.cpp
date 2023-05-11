#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
    int res =0;
    for (int i = 0; i < n; i++)
    {
        res += arr[i];
    }
    
    
    return res;
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number : ";
    cin >>n;
    cout<<endl;
    int *arr = new int [n];
    cout<<"Enter the number : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans = sum(arr, n);
    cout<<"Sum of the number is : "<<ans;
    

    return 0;
}
