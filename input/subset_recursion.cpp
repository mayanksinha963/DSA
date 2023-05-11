#include<iostream>
#include<vector>
using namespace std;

void subset (int arr[], vector<vector<int>>&ans, vector<int>output, int index, int n)
{
    
    if (index >= n)
    {
        ans.push_back(output);
        return;
    }

    subset(arr, ans, output, index+1, n);
    int element = arr[index];
    //cout<<element<<" ";
    output.push_back(element);
    subset(arr, ans, output, index+1, n);
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4};
    vector<vector<int>>ans;
    vector<int>output;
    int index = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    subset (arr, ans, output, index, n);
    //cout<<ans.size();

   
    

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}


