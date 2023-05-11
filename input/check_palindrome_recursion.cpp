#include<iostream>
using namespace std;

bool palindrome(string word, int size, int n)
{
    int i = n;
    while (i < size)
    {
        word[i] = word[i] ^ word[size];
        word[size] = word[i] ^ word[size];
        word[i] = word[i] ^ word[size];

        if (word[i] != word[size])
        {
            return false;
        }
        else{
            return true;
        }
        
    }
    return true;
    
}

int main(int argc, char const *argv[])
{
    string word;
    cout<<"Enter the word ";
    cin>>word;
    int size = word.length() -1;

    cout<<palindrome(word, size, 0);
    return 0;
}
