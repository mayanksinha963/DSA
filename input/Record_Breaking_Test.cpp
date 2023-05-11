#include<iostream>
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
    int i;
    int b = 0;
    int count = 0;
    //int j = i +1;
    cout<<"Ans"<<endl;
    for (i = 0; i < n-1; i+=2)
    {
        int j = i + 1;
        int a;
        //cout<<array[i]<<endl;
        if (array[j] > array[i] && array[j]>b )
        {
        cout<<array[j]<<endl;
        count ++;
        }
        b = max(b, array[j]);
    }
    cout<<count<<endl;
    return 0;
}
