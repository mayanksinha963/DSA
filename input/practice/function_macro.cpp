#include<iostream>
using namespace std;
 
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    int mini = min(num1, num2);
    cout<<mini;

   
    return 0;
}
