#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    string m;
    ifstream in("sample601.txt");
    //in>>m;
    getline(in, m);
    cout<<m;
    return 0;
}
