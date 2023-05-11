#include <iostream>
using namespace std;

const int n = 9;

bool issafe(int sudoku[n][n], int row, int col, int value)
{
    
    for (int i = 0; i <= n-1; i++)
    {
        if (sudoku[row][i] == value)
        {
            return false;
        }
        
    }for (int i = 0; i <= n-1; i++)
    {
        if (sudoku[i][col] == value)
        {
            return false;
        }
        
    }

    int startrow = row - row % 3;
    int startcol = col- col %3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sudoku[i + startrow][j + startcol] == value)
            {
                return false;
            }
            
        }
        
    }
    return true;
    
}


void solve (int sudoku[n][n], int row, int col)
{
    //cout<<row<<" "<<col<<endl;
    if (row == n && col == n)
    {
        //cout<<1<<endl;
        return;
    }

    if (row == n)
    {
        col ++;
        row = 0;
    }

    if (sudoku[row][col] > 0)
    {
        return solve(sudoku, row +1, col);
    }
    
    
    for (int i = 0; i <= n; i++)
    {
        if (issafe(sudoku, row, col, i) && !sudoku[row][col])
        {

            cout<<i<<endl;
            sudoku[row][col] = i;
            solve(sudoku, row+1, col);
            break;
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int sudoku[n][n] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                        {5, 2, 0, 0, 0, 0, 0, 0, 0},
                        {0, 8, 7, 0, 0, 0, 0, 3, 1},
                        {0, 0, 3, 0, 1, 0, 0, 8, 0},
                        {9, 0, 0, 8, 6, 3, 0, 0, 5},
                        {0, 5, 0, 0, 9, 0, 6, 0, 0},
                        {1, 3, 0, 0, 0, 0, 2, 5, 0},
                        {0, 0, 0, 0, 0, 0, 0, 7, 4},
                        {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    int row = 0;
    int col = 0;
    int pos = 0;

    solve(sudoku, row, col);

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
