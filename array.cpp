#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {2,3,4,5,5,7};
    int dup = 0;
    for (int i = 0; i < 6; i++)
    {
        dup = dup ^ arr[i] ^ i;
    }
    cout<<dup;
    return 0;
}
