#include<iostream>
using namespace std;
void display(int array[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}

void deletion (int array[], int n, int index)
{
    for (int i = index; i < n; i++)
    {
        array[i] = array[i+1];
    }
    
}
int main(int argc, char const *argv[])
{
    int array[100] = {1,2,3,4,5};
    int index;
    cout<<"Enter the index"<<endl;
    cin>>index;
    deletion(array, 5, index);
    display(array, 4);
    return 0;
}
