#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float d = 3.44F;
    long double e= 3.44L;
    cout<<"The size of 3.44 is "<<sizeof(3.44)<<endl;
    cout<<"The size of 3.44f is "<<sizeof(3.44f)<<endl;
    cout<<"The size of 3.44F is "<<sizeof(3.44F)<<endl;
    cout<<"The size of 3.44l is "<<sizeof(3.44l)<<endl;
    cout<<"The size of 3.44L is "<<sizeof(3.44L)<<endl;

    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
