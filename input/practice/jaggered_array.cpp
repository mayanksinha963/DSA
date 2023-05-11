#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int **arr = new int *[n];
    int *arr1 = new int [n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cout<<"Enter the number : ";
        cin>>m;
        arr1[i] = m;
        arr[i] = new int[m];
    }

    //cout<<arr[0].length();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr1[i]; j++)
        {
            cout<<"Enter element of "<<i<<" "<<j<<" : "; 
            cin>>arr[i][j];
        }
        //cout<<endl;
    }
    cout<<arr[0].Length;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr1[i]; j++)
        {
            cout<<"Element of "<<i<<" "<<j<<" : "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
