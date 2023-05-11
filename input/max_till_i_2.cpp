#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mx= -199999;
    int n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"Index of the array"<<endl;
    //cout<<array[0]<<endl;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
        cout<<mx<<endl;
    }
    
    
    return 0;
}
