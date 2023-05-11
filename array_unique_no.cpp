#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[7] = {1, 3, 4, 2, 2, 2, 7};
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

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> g1;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                cout << count<<endl;;
            }
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
                cout<<"false"<<endl;
            }
            
            
        }
        
    }
    

    return 0;
}
