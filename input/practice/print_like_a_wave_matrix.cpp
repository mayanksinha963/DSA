#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int rows;
    int columns;
    cout<<"Enter the number of rows and columns "<<endl;
    cin>>rows>>columns;
    //cout<<rows<<columns;

    int arr[rows][columns];

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
            cout<<arr[j][i]<<" ";
        }
        
    }
    
    
    return 0;
}
