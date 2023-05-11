#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int j, r;
    cin>>j;
    while (j--)
    {
        cin>>r;
        int cnt = 0;
        while (r>0)
        {
            if ((r & 1) > 0)
            {
                cnt ++;
            }
            r = r >> 1;
        }
        cout<<cnt;
    }
    
    return 0;
}
