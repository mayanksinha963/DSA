#include<iostream>
#include<queue>

using namespace std;


int main(int argc, char const *argv[])
{
    queue <int> g;
    int arr[15];
     g.push(34);
     g.push(54);
     g.push(17);
    int i =1;
    for (int j = 0; j < i; j++)
    {
        g.pop();
    }
    
    cout<<g.front()<<endl;
    return 0;
}
