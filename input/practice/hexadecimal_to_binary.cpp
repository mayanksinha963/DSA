#include<iostream>
#include<cmath>
using namespace std;


int main(int argc, char const *argv[])
{
    string num;
    cout<<"Enter the number ";
    cin>>num;
    int ans = 0;
    int a = num.size();
    int j = 0;
    //cout<<a;

    for (int i = num.size()-1; i >= 0; i--)
    {
        
        if (num[i] >= '0' && num[i] <= '9')
        {
            
            ans += int(num[i] - 48) * pow(16, j);
        }
        else if (num[i] >= 'A' && num [i] <= 'F')
        {
            ans += int(num[i] - 55) * pow(16, j);
        }
        j++;
        
        
    }
    cout<<ans;
    
    return 0;
}
