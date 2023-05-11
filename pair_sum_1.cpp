#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,-3,3,3,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i= 0;
    int j= 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
            
        }
        
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    


    while (i < n || j < n)
    {
        

        if (arr[i] + arr[j] == 0 && arr[i]<arr[j])
        {
            cout<<arr[i]<<" "<<arr[j];
            cout<<endl;
            j++;
            
            
        }
        else if (j == n)
        {
            i++;
            j=0;
        }
        
        else {
            j++;
        }
        
    }
    
    return 0;
}
