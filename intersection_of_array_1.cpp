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
    int i= 0;
    int j = 0;

    while (i < n1 && j< n2)
    {
        
        if (arr1[i] == arr2[j])
        {
            gi.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i]>arr2[j])
        {
            j++;
        }
        else{
            i++;
        }
        
    }

    for (auto i = gi.begin(); i != gi.end(); ++i)
    {
        cout<<*i<<" ";
    }
    
    
    return 0;
}
