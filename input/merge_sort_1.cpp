#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> num1;
    num1.push_back(0);
    num1.push_back(1);
    num1.push_back(0);
    num1.push_back(3);
    num1.push_back(12);

    int n = num1.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
             if (num1[i] == 0)
        {
            // num1[j] = num1[j] ^ num1[j+1];
            // num1[j+1] = num1[j] ^ num1[j+1];
            // num1[j] = num1[j] ^ num1[j+1];

            num1[i] = num1[i] ^ num1[j];
            num1[j] = num1[i] ^ num1[j];
            num1[i] = num1[i] ^ num1[j];
        }
        }
        
       
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<num1[i]<<" ";
    }
    
    
}
