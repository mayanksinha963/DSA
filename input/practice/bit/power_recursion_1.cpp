#include<iostream>
using namespace std;

int power(int n1, int n2)
{
    if (n2 == 0)
    {
        return 1;
    }
    if(n2 ==1)
    {
        return n1;
    }
    
    int ans = power(n1, n2/2);
    // cout<<ans<<" "<<n1<<endl;
    int x = n2 & 2;
    if (x == 0)
    {
        return ans * ans;
    }
    else
    {
        return ans *n1 * ans;
    }
    
}

int main(int argc, char const *argv[])
{
    int n1, n2;
    cout<<"Enter the numbers ";
    cin>>n1>>n2;
    
    //cout<<n1<<n2<<endl;
    cout<<power(n1, n2);
    return 0;
}
