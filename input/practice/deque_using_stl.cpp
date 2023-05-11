#include<iostream>
#include<deque>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<int>d;
    d.push_back(1);
    cout<<d.back();
    cout<<d.front();
    // d.push_front(3);
    cout<<d.front()<<endl;
    d.push_back(2);
    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    
    // d.pop_back();
    // cout<<d.back();
    
    return 0;
}
