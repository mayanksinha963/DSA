#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int rows, columns;
    
    cout<<"Enter the number of rows and columns : ";
    cin>>rows>>columns;

int r = rows-1;
    int c = columns -1;
    int arr[rows][columns];
    int arr1[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Enter the element of "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr1[j][c-i] = arr[i][j];
            
        }
        
    }
    cout<<endl;
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}
