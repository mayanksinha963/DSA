#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int rows, columns, array[rows][columns];
    cout<<"Enter the number of rows : "<<endl;
    cin>>rows;
    cout<<"Enter the number of columns : "<<endl;
    cin>>columns;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout<<"Enter the array of index "<<i<<" "<<j<<" : ";
            cin>>array[i][j];
        }
        
    }

    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (num == array[i][j])
            {
                cout<<"Element is found"<<endl;
                return 0;
            }
            
        }
        
    }
    cout<<"Element is not found"<<endl;
    
    return 0;
}
