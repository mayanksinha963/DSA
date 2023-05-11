#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream out;
    out.open("sample60.txt");
    out<<"Hello Everyone!!"<<endl;
    out<<"Mayank Sinha from this side"<<endl;

    ifstream in;
    string st;
    in.open("sample60.txt");
    while (in.eof() == 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    return 0;
}
