#include<iostream>
#include<vector>
using namespace std;
void display (vector <int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(int argc, char const *argv[])
{
    vector<int> vec1;
    int size, element;
    cout<<"Enter the size of your vector "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector : ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1); //Before using pop_back
    vec1.pop_back();
    display(vec1);
    
    return 0;
}
