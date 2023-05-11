#include <bits/stdc++.h> 
bool possible (int newx, int newy, vector < vector < int >> & arr, int n, vector<vector<int>> &visited )
{
    if(newx < n && newx >= 0 && newy < n && newy > 0 && visited[newx][newy] == 0 && arr[newx][newy] == 1 )
    {
        return true;
    }
    else {
        return false;
    }
}
void solve (vector < vector < int >> & arr, int n,vector<vector<int>> &visited, vector<string> &ans,int x, int y, string path )
{
    if(x == n-1 && y == n-1)
    {
        ans.push_back(path);
        return;
    }
    
    visited[x][y] == 1;
    //UP
    int newx = x;
    int newy = y-1;
    if(possible(newx, newy, arr, n,visited))
       {
           path.push_back('U');
           solve(arr, n, visited, ans, x, y-1, path);
           path.pop_back();
           
       }
    //down
    newx = x;
    newy = y+1;
    if(possible(newx, newy, arr, n,visited))
       {
           path.push_back('U');
           solve(arr, n, visited, ans, x, y-1, path);
           path.pop_back();
           
    }
    //left
    newx = x-1;
    newy = y;
    if(possible(newx, newy, arr, n,visited))
       {
           path.push_back('U');
           solve(arr, n, visited, ans, x, y-1, path);
           path.pop_back();
           
    }
    //right
     newx = x+1;
    newy = y;
    if(possible(newx, newy, arr, n,visited))
       {
           path.push_back('U');
           solve(arr, n, visited, ans, x, y-1, path);
           path.pop_back();
           
    }
    visited[x][y] = 0;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<vector<int>>visited = arr;
    vector<string>ans;
    
    if(arr[0][0] == 0)
    {
        return ans;
    }
    for(int i= 0; i <n; i++)
    {
       for (int j = 0; j < n; j++)
       {
           visited[i][j] = 0;
       }
    }
    string path = "";
    solve (arr, n, visited, ans, 0 ,0, path);
    return ans;
}