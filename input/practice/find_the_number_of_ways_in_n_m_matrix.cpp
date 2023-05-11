#include<iostream>
using namespace std;

int count(int rows, int columns)
{
    if (rows == 1 || columns == 1)
    {
        return 1;
    }

    return count(rows-1, columns) + (rows, columns -1);
    
}

int main(int argc, char const *argv[])
{
    int rows, columns;

    cout<<"Enter the rows and columns ";
    cin>>rows>>columns;

    cout<<endl;
    cout<<count(rows,columns);

    return 0;
}
