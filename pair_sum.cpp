#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,-3,3,3,-2};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                cout<<arr[i]<<" "<<arr[j];
                cout<<endl;
            }
            
        }
        
    }
    
    return 0;
}
