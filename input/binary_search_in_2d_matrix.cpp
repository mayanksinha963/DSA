#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int rows;
    cout<<"Enter the rows : ";
    cin>>rows;
    int columns;
    cout<<"Enter the columns : ";
    cin>>columns;
    int array[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"Enter the matrix for index "<<i<<" "<<j<<" : ";
            cin>>array[i][j];
        }
        
    }
    cout<<endl;
    cout<<"Your matrix is : "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the number : ";
    cin>>target;
    int start = 0;
    int end = rows * columns -1;
    int mid = (start + end)/2;
    
    while (start <= end)
    {
        int element = array[mid/columns][mid%columns];
        if (target == element)
        {
            cout<<1;
            return 0;
        }
        else if (target > element)
        {
            start = mid + 1;
        }
        else {
            end = mid-1;
        }
        
        mid = (start + end)/2;
    }
    
   
    return 0;
}
