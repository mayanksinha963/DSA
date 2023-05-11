#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr [] = {0,0,1,1,2,2,2,2};
    int low =0;
    
    int n = sizeof(arr)/sizeof(arr[0]);
   
    int high = n-1;
    int mid;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    int ans = 0;
    mid = (low + high) /2;
    
    while (low <= high)
    {
        
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid-1;
        }
        if (arr[mid] > key)
        {
            high = mid -1;
        }
        else if (arr[mid] < key)
        {
            low = mid +1;
          
            
        }
       
        
         mid = (low + high) /2;
    }
    cout<<ans;
    
    return 0;
}
