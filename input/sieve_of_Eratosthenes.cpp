#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    vector<bool> prime(number + 1, true);
    prime[0] = prime[1] = false;

    int count = 0;

    for (int i = 2; i < number; i++)
    {

        if (prime[i])
        {
            count++;

            for (int j = 2 *i; j < number; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }

    cout<<count;
    return 0;
}
