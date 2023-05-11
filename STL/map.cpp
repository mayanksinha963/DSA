#include<iostream>
#include<map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;
    m[1] = "Kanhca";
    m[2] = "Chena";
    m[3] = "Ara";

    cout<<"Before erase "<<endl;
    m.insert({4,"Bihar"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 4 : "<<m.count(4)<<endl;

    cout<<"After erase "<<endl;
    m.erase(3);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}
