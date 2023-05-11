#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int sum = 0;
    int p = 0;
    int base =1;
    //cout<<"Enter the number in which you want to convert"<<endl;
    int n;

    while (num > 0)
    {
        n = num % 10;
        sum = sum  + n* pow(8, p);
        //cout<<sum<<endl;
        p++;
        num = num/10;
        base = base * 2;
        
    }
    
    cout<<sum;
    //cout<<"0";
    
    return 0;
}
