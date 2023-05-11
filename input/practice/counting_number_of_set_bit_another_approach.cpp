#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int j, n;
    cin>>j;
    while (j--)
    {
        cin>>n;
        int cnt = 0;
        while (n>0)
        {
            cnt ++;
            n = (n & (n-1));
        }
        
    cout<<cnt;
    }
    
    return 0;
}
