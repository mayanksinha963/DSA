#include<iostream>
#include<vector>
using namespace std;

bool check (vector <int> &num)
{
    int count = 0;
    for (int i = 1; i < num.size(); i++)
    {
        if (num[i-1] > num[i])
        {
            count ++;
        }
        
    }
    if (num[num.size() -1] > num[0])
    {
        count++;
    }
    
    return count <=1;
}

int main(int argc, char const *argv[])
{
    vector <int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(1);
    

    cout<<check(num);
    return 0;
}
