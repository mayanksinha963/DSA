#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int ans = 0;
    int pd = array[1] - array[0];
    int j = 2;
    int curr = 2;
    while (j<n)
    {
        if (pd == array[j] - array[j-1])
        {
            curr ++;
        }
        else
        {
            pd = array [j] - array [j-1];
            curr = 2;
        }
        ans = max (ans, curr);
        j ++;
        
        
    }
    cout<<"Answer is ";
    cout<<ans<<endl;
    
    return 0;
}
