#include<iostream>
#include<deque>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_front(1);

    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before erase ";
    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"After erase ";
    d.erase(d.begin(), d.begin()+1);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //Pop from front

    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }  
    cout<<endl;

    //Pop from bcak
    d.pop_back();
        for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
    return 0;
}
