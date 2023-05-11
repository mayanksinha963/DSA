#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[8] = {5,4,1,4,5,1,2,3};
    int res = 0;
    for (int i = 0; i < 8 ; i++)
    {
        res = res ^ arr[i];
        //cout<<res<<endl;
    }
    int pos;
    for (int i = 0; i < 8; i++)
    {
        if ((res>>i) & 1 == 1)
        {
            pos= i;
            break;
        }
        
    }
     //cout<<pos;
    int odd[8];
    int even [8];
    int a;
    for (int i = 0; i < 8; i++)
    {
        a= (arr[i] >> pos) & 1;
        // cout<<a<<endl;
        odd[i] = 0;
        even[i] = 0;
        if (a == 0)
        {
            even[i] = arr[i];
            // cout<<even[i];
        }
        else
        {
            odd[i] = arr[i];
            // cout<<odd[i];
        }
        
    }
    int first = 0, second = 0;
   
    for (int i = 0; i < 8; i++)
    {
        first = first ^ even[i];
        second = second ^ odd[i];
        
        
    }
    cout<<first<<" ";
    cout<<second;
    
    return 0;
}
