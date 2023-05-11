//#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<" "<<endl;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        //cout<<array[i]<<endl;
        counter = 0;
        for (int j = i; j < n; j++)
        {
            counter += array[j];
            cout<<counter<<" ";
        }
       cout<<endl;
    }
    
    
    return 0;
}
