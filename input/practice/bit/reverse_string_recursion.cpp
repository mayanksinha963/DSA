#include<iostream>
using namespace std;

void reverse (string &word, int n, int i)
{
    //cout<<last<<" "<<i<<endl;
    if (i > n)
    {
        // for (int j = 0; j < 6; j++)
        // {
        //     cout<<word[j];
        // }
        
        return;
    }
    word[i] = word[i] ^ word[n];
    word[n] = word[i] ^ word[n];
    word[i] = word[i] ^ word[n];
    // cout<<word[i]<<" ";
    // cout<<word[n]<<endl;
    
    reverse(word, n-1, i+1);
}

int main(int argc, char const *argv[])
{
    string word;
    cout<<"Enter the word ";
    cin>>word;
    //cout<<word;
    int n = word.size();
    //int last= word.size();
    int i = 0;
    reverse(word, n-1, i);
    
    for (int i = 0; i < n; i++)
    {
        //cout<<"M";
        cout<<word[i];
    }
    
    return 0;
}
