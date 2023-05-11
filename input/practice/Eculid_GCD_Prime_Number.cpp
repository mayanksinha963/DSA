#include<iostream>
#include<cmath>
using namespace std;

bool check(int arr[], int num)
{
    for (int i = 1; i < num; i++)
    {
        arr[i] = true;
        
    }
    
    for (int i = 2; i*i <= num; i++)
    {
        for (int j = 2*i; j <= num; j+=i)
        {
            if (j != i)
            {
                
            
            if (arr[j] != 0)
            {
                if (j % i == 0 )
            {
                arr[j] = 0;
            }
            }         
        }
        
    }
    }
   arr[1]= 0;
    return arr;
}




int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int arr[num];
    for (int i = 1; i <= num; i++)
    {
        arr[i] = i;
    };

    check(arr, num);
    for (int i = 1; i  <= num; i++)
    {
        if (arr[i] == true)
        {
            cout<<i<<" ";
        }
        
    }
    
    
    return 0;
}
