#include<iostream>
#include<string>

using namespace std;

string s ()
{
    string s = "mayank";
    return s;
}

string* getNames() {
 string* names = new string[3];
 names[0] = "Simon";
 names[1] = "Peter";
 names[2] = "Dave"; 

 return names;
}
int main(int argc, char const *argv[])
{
   cout<<s()<<endl;
    return 0;
}
