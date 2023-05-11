#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<int>q;
    q.push(10);
    q.push(15);
    q.push(13);

    cout<<q.size();

    q.pop();
    cout<<endl;
    cout<<q.size();
    cout<<endl;

    cout<<q.empty(); 
    cout<<endl;

    cout<<q.front();  
    return 0;
}
