#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {24,69,100,99,79,78,67,36};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high= n-1;
    int mid = (low + high)/2;

    if (arr[mid] > arr[mid +1])
    {
        high = mid;
        //cout<<arr[mid]<<endl;
    }
    else {
        low = mid;
        
    }
mid = (low + high)/2;

    while (low <= high)
    {
        
        if (arr[mid] < arr[mid +1]) 
        {
            
            low++;
        }

         else if (arr[mid] > arr[mid -1])
        {
              
            high--;
        }
        
        if (low == high)
        {
           
            cout<<arr[low]<<endl;;
        }
        
        mid = (low + high)/2;
    }
    
    
    return 0;
}
