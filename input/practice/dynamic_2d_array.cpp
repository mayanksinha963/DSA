#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cout<<"Enter rows and columns : ";
    cin>>n>>m;
    int **arr = new int* [n];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int [m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter the value for "<<i<<" "<<j<<"  : ";
            cin>>arr[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"The value of "<<i<<" "<<j<<" is ";
            cout<<arr[i][j]<<endl;
        }
        
    }
    
     //releasing memeory
     for (int i = 0; i < m; i++)
     {
        delete [] arr[i];
     }
     
     delete []arr;
    return 0;
}
