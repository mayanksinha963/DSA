#include<iostream>
using namespace std;

bool linear(int arr[], int size, int key)
{
    
    if (arr[0] == key)
    {
        return true;
    }
    else if (size == 0)
    {
        return false;
    }
    else {
        linear (arr+1, key, size-1);
    }
    
    
}

int main(int argc, char const *argv[])
{
    int arr[5]= {1,2,3,4,5};
    int key;
    cout<<"Enter the key ";
    cin>>key;
    cout<<linear(arr, 5, key);
    return 0;
}
