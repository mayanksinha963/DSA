#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter the 1 for converting into Upper Case... and 2 for in lower case" << endl;
    int num;
    cin >> num;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        switch (num)
        {
        case 1:
            if ((int)str[i] >= 97 && (int)str[i] <= 122)
            {
                str[i] = (int)str[i] - 32;
                // cout<<(char)str[i]<<endl;
            }

            break;

        case 2:
            if ((int)str[i] >= 65 && (int)str[i] <= 90)
            {
                str[i] = (int)str[i] + 32;
                // cout<<(char)str[i]<<endl;
            }

            break;
        }
    }
    cout << str << endl;

    // transform(str.begin(), str.end(), str.begin(), ::toupper);
    // cout<<str<<endl;
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout<<str<<endl;

    return 0;
}
