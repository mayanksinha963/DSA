#include<iostream>
#include<vector>
using namespace std;

const int n = 5;

int row[] = {2, 1, -1, -2, -2, -1, 1, 2, 2};
int col[] = {1, 2, 2, 1, -1, -2, -2, -1, 1};

void toadd(vector<vector<int>>&visited, int store[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //visited[i][j] = store[i][j];
            store[i][j] = visited[i][j];
        }
        
    }
    
}

bool issafe( int newx, int newy, vector<vector<int>>&visited)
{
    if (newx < 0 || newy < 0 || newx >= n ||newy >= n)
    {
        return false;
    }

    // if (visited[newx][newy] != 1)
    // {
    //     return true;
    // }
    return true;
    
    
}

void solution (vector<vector<int>>&visited, int rows, int columns, int pos, int store[n][n])
{
    visited[0][0] = 1;
    //visited[rows][columns] = pos;
    if (pos >= n*n)
    {
        toadd(visited, store);
        return;
    }

    for (int i = 0; i < 8 ; i++)
    {
        int newx = rows + row[i];
        int newy = columns + col[i];

        if (issafe(newx, newy, visited) && !visited[newx][newy])
        {
            visited[newx][newy] = pos +1;
            solution(visited, newx, newy, pos +1, store);
        }
        
    }

    visited[rows][columns] = 0;
    
    
}

int main(int argc, char const *argv[])
{

    vector<vector<int>>visited(n, vector<int>(n, 0));
    cout<<visited.size()<<endl;
    int store [n][n];
    int rows =0;
    int columns = 0;
    int pos =1;
    solution(visited, rows, columns, pos, store);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<store[i][j]<<" ";
        }
        cout<<endl;
    }
    



    return 0;
}
