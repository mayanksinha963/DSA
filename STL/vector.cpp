#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> v;
    
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;

    

    cout<<"Front element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"After pop"<<endl;

    v.pop_back();
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size ";
    cout<<v.size()<<endl;

    cout<<"after clear size ";
    v.clear();
    cout<<v.size()<<endl;



    vector<int> a(5,1);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    

//for copy one vactor to another
    vector<int> last(a);
    for (int i:last)
    {
        cout<<i<<" ";
    }
    return 0;
}
