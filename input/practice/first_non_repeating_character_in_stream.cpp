#include<iostream>
#include<queue>
using namespace std;



int main(int argc, char const *argv[])
{
    string A = "aabc";
    int arr[26] = {0};
    for (int i = 0; i < A.size(); i++)
    {
        int c = A[i]-97;
        arr[c]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}
