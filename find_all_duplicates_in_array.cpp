#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {4,3,2,7,8,2,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>gi;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout<<arr[i];
                cout<<endl;
            }
            
        }
        
    }
    
    return 0;
}
