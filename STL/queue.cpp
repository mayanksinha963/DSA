#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> q;
    q.push("Kancha");
    q.push("Chena");
    q.push("CS");

    cout<<"First element "<<q.front()<<endl;

    q.pop();

    cout<<"First element after pop "<<q.front()<<endl;
    return 0;
}
