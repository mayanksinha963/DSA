#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, float> markmap;
    markmap ["Mayank"] = 100;
    markmap ["Saurabh"] = 99.99;
    markmap ["Dhruv"] = 99.99;
    markmap ["Pranjal"] = 95;
    markmap ["Sashank"] = 99.98;
    markmap.insert({{"Deepankar", 99.97}, {"Tanmay", 100.1}});

    map<string, float> :: iterator iter;
    for (iter = markmap.begin();iter != markmap.end(); iter ++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    return 0;
}
