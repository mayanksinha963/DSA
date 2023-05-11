#include<iostream>
using namespace std;

bool binary(int arr[], int low, int high, int key)
{
    
    if (low > high)
    {
        return false;
        }


    int mid= (low + high)/2;
    //cout<<mid<<endl;
    if (arr[mid] > key)
    {
        high = mid-1;
    }
    else if (arr[mid] < key)
    {
        low = mid+1;
    }
     else if(arr[mid] == key)
     {
        return true;
     }
    binary(arr, low, high, key);
    }
    //return false;
    
    
    
//}

int main(int argc, char const *argv[])
{
    int arr [5] ={2, 3, 4, 10, 40};
    int low = 0;
    int high = 5;
   
    int key;
    cout<<"Ente the number ";
    cin>>key;
    cout<<binary(arr, low, high, key);
    return 0;
}
