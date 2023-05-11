#include<iostream>
using namespace std;

void linear_searching(int array[], int num)
{
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == num)
        {
            cout<<i+1<<endl;
        }

    }
    
}

int main(int argc, char const *argv[])
{
    int array[10];
    cout<<"Enter the array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>array[i];
    };
    int num;
    cout<<"Enter the key"<<endl;
    cin>>num;
    linear_searching(array, num);
    return 0;
}

