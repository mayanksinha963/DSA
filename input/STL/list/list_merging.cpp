#include<iostream>
#include<list>
using namespace std;
void display (list<int> &lst)
{
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    list<int> list1;
    list1.push_back (1);
    list1.push_back (2);
    list1.push_back (3);
    list1.push_back (4);

    list<int> list2;
    list2.push_back(5);
    list2.push_back(6);
    list2.push_back(7);
    list2.push_back(8);

    cout<<"Before merging "<<endl;
    display(list1);
    cout<<endl;

    cout<<"After merging"<<endl;
    list1.merge(list2);
    display(list1);
    return 0;
}
