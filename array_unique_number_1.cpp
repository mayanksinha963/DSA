#include <iostream>
#include <vector>

using namespace std;

bool res(int arr[])
{
    for (int i = 0; i < 7; i++)
    {

        for (int j = i; j < 7; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }
    }

    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    vector<int> g1;
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == arr[i+1])
        {
            count ++;
        }
        g1.push_back(count);
        count = 0;
        
    }
    

    for (auto i = g1.begin(); i != g1.end(); ++i)
    {
        for (auto j = i+1; j != g1.end(); ++j)
        {
            if (*i == *j && *i != 0)
            {
                
                return false;
            }
            
        }
        
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int arr[7] = {1, 2, 3, 3, 6, 5, 4};
    cout<<res(arr);

    return 0;
}
