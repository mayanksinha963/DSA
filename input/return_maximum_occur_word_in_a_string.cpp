#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "Hii";
   

    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int n = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            n = s[i] - 'a';
            //cout<<s[i];
            //cout<<n<<endl;
            
        }
        else {
            n = s[i] - 'A';
        }
        arr[n]++;
        
    }
    
    
    
    int mini = -1;
    // int ans = 0;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mini < arr[i])
        {
            ans = i;
            mini = arr[i];
            
        }
    }
    
    char final = 'a' + ans;
    cout << final;
    return 0;
}
