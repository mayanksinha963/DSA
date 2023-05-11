#include<iostream>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int max = 0;
    int cur = 0;
    char arr[100]= "hello everyone my name is mayank sinha";
    int x = strlen(arr);
    //cout<<x<<endl;
    //cin.getline(arr, 100);
    //cin.ignore();
    for (int i = 0; i < x; i++)
    {
        
        if (arr[i] == ' ' || arr [i] == '\0')
        {
            //cout<<"1"<<endl;
            if (cur > max)
            {
                //cout<<"2"<<endl;
                max = cur;
                
            }
            cur = 0;
        }
        else{
            cur++;
        }
        if (arr[i] == '\0')
        {
            //cout<<"end"<<endl;
            break;
        }
        
    }
    cout<<max<<endl;
    //cout<<cur;
    return 0;
}
