
#include<iostream>
using namespace std;
void display (int array[], int n)
{
    for (int i = 0; i <= n+1; i++)
    {
        cout<<array[i]<<" ";
    }
    
}
void insertion (int array[], int index, int num, int n)
{
    //int i = index;
    for ( int i = n+1; i >= index; i--)
    {
        // int temp = array[i];
        
        // array[i] = array[i+1];
        
        // array[i+1] = temp;
        
        array [i+1] = array [i];

    }
    array[index] = num; 
}

int main(int argc, char const *argv[])
{
    int array[100] = {0,1,2,3,4,5};
    int n = sizeof(array)/sizeof(int);
    //cout<<n;
    int index;
    cout<<"Enter the index of requried number"<<endl;
    cin>>index;
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    insertion(array, index, num, 5);
    display(array, 5);

    return 0;
}
