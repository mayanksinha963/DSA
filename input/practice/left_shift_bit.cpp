#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int q, n, i;
    cin>>q;

    while (q--)
    {
        cin>>n>>i;
        cout<<n<<" << "<<i<<" = "<<(n<<i)<<endl;
    }
    
    return 0;
}
