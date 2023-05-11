#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   
    int arr [7] = {0,4,1,4,3,3,1};
    int res = 0;
    for (int i = 0; i < 7; i++)
    {
        res = res ^ arr[i];
        
    }
    cout<<res;
    
    
    return 0;
}
