#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    std :: string name;
    cout<<"Enter your name "<<endl;
    std::getline(std::cin, name);
    //cout<<name;
    ofstream nout("name.txt");
    nout<<"My name is "<<name;
    nout.close();

    ifstream nin("name.txt");
    getline(nin,name);
    cout<<"The content of this file is "<<name<<endl;
    nin.close();
    return 0;
}
