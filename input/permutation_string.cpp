#include<iostream>
#include<vector>
using namespace std;

void permutation(string word, vector<string>&ans, int n, int i)
{
    if ( i >= n)
    {
      
        ans.push_back(word);
        return;
    }
   
        for (int j = i; j < n; j++)
        {
           
            swap(word[i], word[j]);
            permutation(word,ans,n, i+1);
            swap(word[i], word[j]);
        }
        
    
    
    
}

int main(int argc, char const *argv[])
{
    string word ="abc";
    vector<string>ans;
    int n= word.length();
    permutation(word, ans, n, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
