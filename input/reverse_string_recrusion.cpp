#include<iostream>
using namespace std;

void reverse (string &word, int n, int size)
{
    cout<<n<<" "<<size<<endl;

    int i = n;
    while (i < size)
    {
        word[i] = word[i] ^ word[size];
        word[size] = word[i] ^ word[size];
        word[i] = word[i] ^ word[size];
        i++;
        size--;
        return reverse(word, i, size);
    }
    
    
    
    
}

int main(int argc, char const *argv[])
{
    string word;
    cout<<"Enter the word ";
    cin>>word;
    int size= word.length() -1;
    int n = size/2;
    reverse(word, 0, size);
    for (int i = 0; i <= size; i++)
    {
        cout<<word[i]<<" ";
    }
    
    return 0;
}

