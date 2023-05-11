#include<iostream>
#include<conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
   
    int arr[] = {0,1,0,1,1,0};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i = 0;
    int j = n-1;
    
    while (i < j)
    {
        
        while (arr[i]==0 && i <j)
        {
            i++;
        }
        
        while (arr[j]==1 && i <j)
        {
            j--;
        }
        
        if (i <j)
        {
            
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            
        }     
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
   
    
    return 0;
}
