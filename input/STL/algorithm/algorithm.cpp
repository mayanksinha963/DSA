#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,73, 4, 2,7};
    sort (arr, arr+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    sort (arr, arr+5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

