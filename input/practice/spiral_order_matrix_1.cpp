#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int rows;
    int columns;
    cout << "Enter the number of rows and column of matrix ";
    cin >> rows >> columns;

    vector<int> ar;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the element of " << i << " " << j << " : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int row_start = 0, row_end = rows - 1, column_start = 0, column_end = columns - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        for (int i = column_start; i <= column_end; i++)
        {
            ar.push_back(arr[row_start][i]);
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            ar.push_back(arr[i][column_end]);
        }
        column_end--;
        for (int i = column_end; i >= column_start; i--)
        {
            ar.push_back(arr[row_end][i]);
        }
        row_end--;
        for (int i = row_end; i >= row_start; i--)
        {
            ar.push_back(arr[i][column_start]);
        }
        column_start++;
    }


for (int i = 0; i < ar.size(); i++)
{
    cout<<ar[i]<<" ";
}

    return 0;
}
