#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 4;
    int m = 3;
    vector<int> a;
    vector<int> b;

    a.push_back(10);
    a.push_back(5);
    a.push_back(6);
    a.push_back(2);

    b.push_back(12);
    b.push_back(7);
    b.push_back(9);

    priority_queue<int> q;
    vector<int>ans;

    for (int i = 0; i < n; i++)
    {
        q.push(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        q.push(b[i]);
    }

    for (int i = 0; i < m + n; i++)
    {
        ans.push_back(q.top());
        q.pop();
    }

    for (int i = 0; i < m + n; i++)
    {

        cout << ans[i] << " ";
    }

    return 0;
}
