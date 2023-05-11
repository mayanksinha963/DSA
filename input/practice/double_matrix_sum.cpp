#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3][3];
    vector<int> s;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Element of matrix "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
        
    }

    int maxi = -1;
    int column;
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        s.push_back(sum);
        maxi = max(maxi, sum);
        if (sum>maxi)
        {
            column = j;
        }
        
        
    }
    cout<<maxi<<" "<<"column "<<j<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    
    
    return 0;
}
