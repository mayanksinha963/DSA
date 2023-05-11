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

    int rows_start = 0, rows_end = rows-1, columns_start=0, columns_end=columns-1;
    while (rows_start <= rows_end && columns_start <= columns_end)
    {
        for (int i = columns_start; i <= columns_end; i++)
        {
            cout<<array[rows_start][i]<<" ";
        }
        rows_start++;
        for (int i = rows_start; i <= rows_end; i++)
        {
            cout<<array[i][columns_end]<<" ";
        }
        //cout<<endl;
        columns_end--;
        //cout<<columns_end;
        //cout<<endl;
        for (int i = columns_end; i >= columns_start; i--)
        {
            cout<<array[rows_end][i]<<" ";
        }
        rows_end--;
        for (int i = rows_end; i >= rows_start; i--)
        {
            cout<<array[i][columns_start]<<" ";
        }
        columns_start++;
        
        
        
    }
    
    
    

    

    return 0;
}
