#include<iostream>
using namespace std;

bool palindrome (string word, int n, int i)
{
    //cout<<n<<" "<<i<<endl;
    if (i > n)
    {
        return true;
    }

    if (word[n] == word[i])
    {
            return palindrome(word, n-1, i+1);
    }
    else
    {
        return false;
    }
    
    
}

int main(int argc, char const *argv[])
{
    string word;
    cout<<"Enter the word ";
    cin>>word;
    int n = word.size();
    int i = 0;
    cout<<palindrome (word, n-1, i);
    return 0;
}
