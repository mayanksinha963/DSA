#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[6] = {1,2,2,1,1,3};
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j--)
        {
            if (arr[i] == arr[j] )
            {
                break;
            }
            
        }
        
    }
    
    return 0;
}
