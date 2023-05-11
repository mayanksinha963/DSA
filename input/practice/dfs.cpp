#include<iostream>
using namespace std;

    int visited[7] = {0,0,0,0,0,0};
    int a[7][7]= {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };

void dfs (int i)
{
    cout<<i;
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && !visited[j])
        {
            dfs(j);
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    dfs(0);
    return 0;
}
