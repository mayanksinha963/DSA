#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> arr1 = {1, 4, 6, 3, 2};
    vector <int> arr2 = {6, 2, 5, 7, 1};
    vector <int> arr3(10);
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
    for (int i = 0; i < 10; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}
