#include <iostream>
#include <cmath>
using namespace std;

bool res(int num)
{
    int ans = num;

    if (num == 1 || num == 2)
    {
        return true;
    }

    while (ans != 0)
    {
        ans = ans / 2;
        if (ans == 2)
        {
            return true;
        }
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number ";
    cin >> num;

    cout << res(num) << endl;

    return 0;
}
