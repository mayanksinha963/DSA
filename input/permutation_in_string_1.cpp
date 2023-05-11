#include <iostream>
using namespace std;

bool check(int count1[], int count2[])
{
    for (int i = 0; i < 26; i++)
    {
        // cout<<count1[i]<<" "<<count2[i];
        // cout<<endl;
        if (count1[i] != count2[i])
        {
            return 0;
        }
        
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    string s1 = "a";
    string s2 = "ab";
    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int n = s1[i] - 'a';
        count1[n]++;
    }
    // cout << endl;

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << count1[i] << " ";
    // }
    // cout << endl;

    int i = 0;
    while (i < s1.length() && i < s2.length())
    {

        int n = s2[i] - 'a';
        count2[n]++;
        i++;
    }
    // cout<<endl;
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << count2[i] << " ";
    // }
    // cout << endl;
    if (check(count1, count2) == 1)
    {
        //cout << "M";
        cout << 1;
        return 0;
    }

    while (i < s2.length())
    {
        int n = s2[i] - 'a';
        count2[n]++;
        int index = s2[i - s1.length()] - 'a';
        count2[index]--;
        i++;
        if (check(count1, count2) == 1)
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}
