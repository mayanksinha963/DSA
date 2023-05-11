#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    // string str(5, 'M');
    // cout<<str<<endl;

    // string str1 ="Mayank Sinha";
    // cout<<str1<<endl;
    
    // string str3;
    // getline(cin, str3);
    // cout<<str3<<endl;

    string str4= "May";
    //cin>>str4 ;
    
  //  cin>>str4 ;
    string str5="ank";
    //str4.append(str5);
    cout<<str4<<endl;
    
    //cout<<str4[4]<<endl;
    
    
    //cout<<str5<<endl;
    // str5.clear();
    // cout<<str5<<endl;
    // //str4.clear() ;
    // if (str4.empty())
    // {
    //    cout<<"empty"<<endl ;
    // }
    // else
    // {
    //  cout<<"not empty"<<endl ;
    // } 


    // str4.erase(4,2);
    // cout<<str4<<endl;

    // cout<<str4.find("ank")<<endl;
    // str4.find("ank");
    // cout<< str4.find("ank")<<endl;
    

    //cout<<str4.insert(3, "jan");

    cout<<str4.size()<<endl;
    cout<<str4.length()<<endl;
    // for (int i = 0; i < str4.size(); i++)
    // {
    // cout<<str4[i]<<endl ;
    // }

    string str6= str4.substr(3,3);
    cout<<str6<<endl;

    string str7 = "420";
    int i = stoi(str7);
    cout<<i+ 10<<endl;

    cout<<to_string(i) + "10"<<endl;

    sort(str4.begin(), str4.end());
    cout<<str4<<endl;
    return 0;
}
