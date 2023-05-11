#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int cnt= 0;
        while (n>0)
        {
            if ((n & 1) > 0)
            {
               cnt ++;
            }
            n = n >> 1;
        }
        cout<<cnt<<endl;
        
    }
    
    return 0;
}
