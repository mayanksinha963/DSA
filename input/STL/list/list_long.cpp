#include<iostream>
#include<list>
using namespace std;

int main(int argc, char const *argv[])
{
    list <int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list<int> :: iterator it = list1.begin();
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";
    it++;

    return 0;
}
