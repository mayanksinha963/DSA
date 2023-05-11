#include<iostream>
#include<queue>
using namespace std;

void interleave (queue<int> &q)
{
    int n = q.size()/2;
    queue<int> q1;
    queue<int> q2;

    for (int i = 0; i < n; i++)
    {
        q1.push(q.front());
        q.pop();
    }

    for (int i = 0; i < n; i++)
    {
        q2.push(q.front());
        q.pop();
    }
    
    for (int i = 0; i < n; i++)
    {
        // cout<<i<<" ";
        q.push(q1.front());
        
        //cout<<q1.front()<<" ";
        q1.pop();
        q.push(q2.front());
        //cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;

    

    
    
    
    
    

}

int main(int argc, char const *argv[])
{
    queue<int>q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    

    // cout<<q.size();

    
    // cout<<q.size()<<endl;
    interleave(q);
    // cout<<q.size()<<endl;
    
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    
    
    return 0;
}
