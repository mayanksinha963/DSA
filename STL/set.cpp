#include<iostream>
#include<set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);

    for(int i:s)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    cout<<s.size();

    cout<<endl;

    //for deleting first element
    // s.erase(s.begin());
    // for(int i:s)
    // {
    //     cout<<i<<" ";
    // }
    
    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //for check number is prsent or not
    cout<<"for checking number is present or not " <<s.count(10)<<endl;

    set<int>::iterator itr = s.find(5);

    cout<<"Value present at itr "<<*it<<endl;
    return 0;
}
