#include<iostream>
#include<deque>

using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> ch;
    ch.push_front(6);
    cout<<ch.front()<<endl;
    ch.push_back(5);
    cout<<ch.back()<<endl;

    ch.pop_front();
    while (!ch.empty())
    {
        cout<<ch.front()<<endl;
        ch.pop_front();
    }
    
    return 0;
}
