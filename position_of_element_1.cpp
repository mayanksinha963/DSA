#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {0,0,1,1,2,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;
    int first = 0;
    int last = 0;

    while (low<=high)
    {
        if (key == arr[mid])
        {
            first = mid;
            high= mid - 1;
        }
        if (key > arr[mid])
        {
            low = mid +1;
        }
        else if(key < arr[mid])
        {
            high = mid -1;
        }
        
        mid = (low + high)/2;
    }
    cout<<"First occurance at index "<<first;
cout<<endl;

low = 0;
high = n-1;
mid = (low + high)/2;

while (low<=high)
    {
        
        if (key == arr[mid])
        {
            last = mid;
            low= mid + 1;
        }
        else if (key > arr[mid])
        {
            low = mid +1;
        }
        else if(key < arr[mid])
        {
            high = mid -1;
        }
        
        mid = (low + high)/2;
    }
    cout<<"Last occurance at index "<<last;

   
    
    return 0;
}
