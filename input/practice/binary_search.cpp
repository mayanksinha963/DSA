#include<iostream>
#include<algorithm>
using namespace std;
int binarysearch (int array[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        if (array[mid]<key)
        {
            low = mid +1;
        }
        else
        {
            high = mid -1;
        }

        
        
        
        
    }
    return -1;
    
}
int main(int argc, char const *argv[])
{
    int array[] = {667,98,0,54,89,56,34,87};
    
    
    int n = sizeof(array)/sizeof(int);
    sort(array, array + n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    //cout<<n;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    cout<<"Requried key is present on "<<binarysearch(array, n, key)<<" index";
    
    
    
    return 0;
}
