#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int i = 0;
    int mask=  num;
    cout<<mask<<endl;
    while (mask !=0)
    {
        mask = mask >> 1;
        
        i++;
    }
    
    for (int j = 0; j < i; j++)
    {
        mask = mask << 1; 
        mask = mask | 1;
    }
    int res = ~(num) & mask;
    cout<<"Result will be "<<res;
    
    return 0;
}
