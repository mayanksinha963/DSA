#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] ={5,1,2,3,4,2};
    //cout<<arr.size();
    int ans = 0;
    for (int i = 0; i < 6; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        ans = ans ^ i;
    }
    
    cout<<ans;
    
    return 0;
}
