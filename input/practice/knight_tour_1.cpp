#include <iostream>
#include <vector>

using namespace std;
const int n = 5;

int row[] = {2, 1, -1, -2, -2, -1, 1, 2, 2};
int col[] = {1, 2, 2, 1, -1, -2, -2, -1, 1};

bool issafe(vector<vector<int>> &visited, int newx, int newy, int n)
{
    if (newx < 0 || newy < 0 || newx >= n || newy >= n)
    {
        return false;
    }

    return true;
}

void toadd(vector<vector<int>> &visited, int store[5][5], int n, vector<vector<int>> &store1)
{
    vector<int> temp;
    //cout<<temp.capacity();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(visited[i][j]);
            store[i][j] = visited[i][j];
            //store1.push_back(visited);
            //cout<<visited[i][j]<<" ";
        }
        //vector<vector<int>> store1(temp);
        cout<<endl;
    }
}
    

void solution(vector<vector<int>> &visited, int n, int pos, int rows, int columns, int store[5][5], vector<vector<int>> &store1)
{
    visited[rows][columns] = pos;

    if (pos >= (n * n))
    {
        toadd(visited, store, n, store1);
        return;
    }

    for (int i = 0; i < 8; i++)
    {
        int newx = rows + row[i];
        int newy = columns + col[i];

        if (issafe(visited, newx, newy, n) && !visited[newx][newy])
        {
            //visited[newx][newy] = pos + 1;

            // cout<<newx<<" "<<newy<<endl;
            solution(visited, n, pos + 1, newx, newy, store, store1);
        }
    }
    visited[rows][columns] = 0;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    vector<vector<int>> visited(n, vector<int>(n, 0));

    vector<vector<int>> store1;

     int store [5][5];
    int rows = 0;
    int columns = 0;
    solution(visited, n, 1, rows, columns, store, store1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << store[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
