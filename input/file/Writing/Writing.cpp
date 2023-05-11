#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string m = "Hello Everyone";
    ofstream b ("sample60.txt");
    b<<m;
    return 0;
}
