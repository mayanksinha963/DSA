#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1 [100];
    for (int i = 0; i < 100; i++)
    {
        arr1[i] = i+1;
    }

    int arr2 [100];
    for (int i = 0; i < 100; i++)
    {
        arr2[i] = i+1;
    }

    int arr3[100] = {0};
    
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (arr1[j] % arr2[i] == 0)
            {
                if (arr3[j] == 0)
                {
                    arr3[j] = 1;
                }
                else
                {
                    arr3[j] = 0;
                }
                
            }
            
        }
        
    }
    
    
    for (int i = 0; i < 100; i++)
    {
        if (arr3[i] == 1)
        {
            cout<<i<<" ";
        }
        
    }
    
    
    return 0;
}
