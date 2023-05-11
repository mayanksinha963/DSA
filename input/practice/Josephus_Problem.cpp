#include<iostream>
using namespace std;
int josephus (int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    else {
        return (josephus(n-1, k) + k) %n;
    }
    
}

int main(int argc, char const *argv[])
{
    int n, k;
    cout<<"Enter the value of n and k ";
    cin>>n>>k;
    cout<<josephus(n, k);

    return 0;
}
