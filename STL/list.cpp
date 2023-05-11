#include<iostream>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase ";
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
