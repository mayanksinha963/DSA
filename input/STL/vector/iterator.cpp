#include<iostream>
#include<vector>
using namespace std;

void display (vector <int> &v)
{
    for (int i = 0; i < v.size (); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    
}

int main(int argc, char const *argv[])
{
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Add element in your vector : "<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,566);
    display(vec1);
    
    return 0;
}
