#include<iostream>
#include<deque>
#include<vector>

using namespace std;



string digit (int num)
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

    return arr[num];

}



void say (int num, deque<string>&d)
{
    
    if (num == 0)
    {
        
        return;
    }
    

    int n = num % 10;
    
    num = num/10;
    
    d.push_front(digit(n));
   
    say(num, d);

}

int main(int argc, char const *argv[])
{
    deque<string> d;
    
    int num;
    cout<<"Enter the number ";
    cin>>num;
    say(num, d);
    

    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    
    return 0;
}
