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

    int rowI = 0;
    int colI = columns -1;
    
    while (rowI < rows && colI >= 0 )
    {
        int element = array[rowI][colI];
        if (target == element)
        {
            cout<<1;
            return 0;
        }
        else if (element < target)
        {
            rowI ++;
        }
        else {
            colI--;
        }
        
    }
    


    return 0;
}
