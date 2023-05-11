#include <iostream>
#include <vector>

using namespace std;

void sum(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{

    int i = v1.size() - 1;
    int j = v2.size() - 1;
    
    int k = 0;
    int c = 0;
    
    int d;
    while (i >= 0 && j >= 0)
    {

        c = v1[i] + v2[j] + c;

        v3.push_back(c % 10);
        
        c = c / 10;
        i--;
        j--;
        k++;
    }

    while (i >= 0)
    {

        c = (v1[i] + c);
        v3.push_back(c % 10);
        c = c / 10;

        i--;
    }
    if (c != 0)
    {
        v3.push_back(c);
    }

    for (int i = v3.size() - 1; i >= 0; i--)
    {
        cout << v3[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    // v1.push_back(4);

    v2.push_back(9);
    v2.push_back(9);
    v2.push_back(9);
    v2.push_back(6);

    if (v1.size() > v2.size())
    {
        sum(v1, v2, v3);
    }
    else
    {
        sum(v2, v1, v3);
    }

    return 0;
}
