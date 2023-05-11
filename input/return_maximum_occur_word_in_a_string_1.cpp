#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char s[20];
    cin.getline(s, 20);

    int arr[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        int n = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            n = s[i] -  'a';
        }
        else {
            n = s[i] - 'A';
        }
        arr[n]++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    

    int maxi = 1, ans =0;
    char result;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
            ans = i;
        }
        
    }
    result = ans + 'a';
    cout<<result;
        
    return 0;
}
