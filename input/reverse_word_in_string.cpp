#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "hello everyone ";
    vector<char> a;
    int n = s.length() - 1;
    // cout<<n<<endl;
    int l = n;
    int z;
    char d;
    while (n >= 0)
    {
        z = n;
         
        if (s[n] == ' ')
        {
            // cout<<1;
            while (z <= l)
            {
                // cout<<1;
                d = s[z];
                a.push_back(d);
                // cout<<a;
                z++;
            }

            l = n;
            l--;
            // cout<<l;
        }
        else if (z == 0)
        {
            //cout<<1;
            a.push_back(' ');
            while (z <= l)
            {
                d = s[z];
                a.push_back(d);
                // cout<<a;
                z++;
            }
        }

        n--;
        
    }

    // cout<<a.size()<<endl;
    // cout<<a[15]<<endl;
    for (int i = 1; i < a.size(); i++)
    {
        cout << a[i];
    }

    return 0;
}
