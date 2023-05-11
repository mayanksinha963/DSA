#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list <int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}

int main(int argc, char const *argv[])
{
    list <int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(9);
    display(list1);
    cout<<endl;

    list1.sort();
    display(list1);
    cout<<endl;

    list1.remove(9);
    display(list1);
    return 0;
}
