#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter your number" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {

        for (int k = 1; k <= num - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
