#include<iostream>
using namespace std;

int one (void){
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    return a;
}
int main(int argc, char const *argv[])
{
    //one();
    int a = one ();
    cout<<"The value of a is "<<a<<endl;
    int b [a];
    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the value for "<<i<<endl;
        cin>>b[i];
        cout<<"The value of "<<i<<" is "<<b[i]<<endl;
        // cout<<"Enter the value for "<<b[i]<<endl;
        // cin>>b[i];
        // cout<<"The value of array is "<<b[i]<<endl;
    }
    
    return 0;
}
