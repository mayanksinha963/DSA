#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1 [] = {3};
    int arr2 [] = {1,2,3};
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);
    vector<int>gi;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            int a = j;
            if (arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" ";
                gi.push_back(arr1[i]);
                j = a;
                break;
                
            }
            
        }
        
    }
    
    return 0;
}
