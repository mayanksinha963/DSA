#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> interval;
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
   // v1[0][0].push_back(0);

    interval.push_back(v1);

    for (int i = 0; i < interval.size(); i++)
    {
        for (int j = 0; j < interval[i].size(); j++)
        {
            cout<<interval[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;

    vector<int>newinterval;

    newinterval.push_back(3);
    newinterval.push_back(4);
    cout<<newinterval.size()<<endl;
    cout<<newinterval[0]<<endl;

    return 0;
}
