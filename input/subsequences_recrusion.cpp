#include<iostream>
#include<vector>
using namespace std;

void solve (string word, vector<vector<char>> &ans, vector<char>output, int index)
{
   
    if (index >= word.length())
    {
        ans.push_back(output);
        return;
    }
    solve(word, ans, output, index +1);
    char element = word[index];
    //cout<<element;
    output.push_back(element);
    solve(word, ans, output, index +1);
    
}

int main(int argc, char const *argv[])
{
    string word = "abc";
    vector<vector<char>> ans;
    vector<char>output;
    // char element = word[0];
    // cout<<element;
    //<<word.length();
    solve(word, ans, output, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
        
    }
    
    return 0;
}
