#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout<<"Enter the string"<<endl;
    getline (cin, str);
    cout<<"Number in greatest form"<<endl;
    string num;
    int i  =0;
    int j = i;

    for (i = 0; i < str.length(); i++)
    {
        for ( j = i; j < str.length(); j++)
        {
            //cout<<j<<endl;
                if ((int)str[i]<(int)str[j])
                {
                    char temp;
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
                
    
              
            
        }
        
       
       //cout<<str[i]<<endl;
           
            cout<<str[i];
        //cout<<num;
    }
    
    
    return 0;
}
