#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{

vector<int>gi;
    int num;
    cout<<"Enter the num";
    cin>>num;
    int arr[]=  {0,0,1,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;

    while (i < n)
    {
        if (num == arr[i] && arr[i] != arr[i-1])
        {
            gi.push_back(i);
        }
        else if (num == arr[i] && (arr[i] != arr[i+1] || i == n-1))
        {
            
            gi.push_back(i);
        }  
        i++;
    }
    
    if (gi.size() == 0)
    {
        return -1;
    }
    else {
        for (auto j = gi.begin(); j < gi.end(); j++)
        {
            cout<<*j<<" ";
        }
        
    }
    

    return 0;
}
