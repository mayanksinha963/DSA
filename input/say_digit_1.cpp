#include<iostream>
using namespace std;

string digit(int last)
{
    string arr[10];
    arr[0] ={"Zero"};
    arr[1] = {"One"};
    arr[2] = {"Two"};
    arr[3] = {"Three"};
    arr[4] = {"Four"};
    arr[5] = {"Five"};
    arr[6] = {"Six"};
    arr[7] = {"Seven"};
    arr[8] = {"Eight"};
    arr[9] = {"Nine"};

    return arr[last];
}

void say (int num)
{
    if(num == 0)
    {
        return;
    }
    int last = num % 10;
    num = num/ 10;
    say(num);
    cout<<digit(last)<<" ";
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    say(num);
    return 0;
}
