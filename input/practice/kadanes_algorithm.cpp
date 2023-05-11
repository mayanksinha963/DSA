#include<iostream>
using namespace std;
void getdata(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array of index "<<i<<" : ";
        cin>>array[i];
    }
    
}
void setdata(int array[], int n)
{
    int counter = 0;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        counter = counter + array[i];
        if (counter < 0)    
        {
            counter = 0;
        }
        r = max(r, counter);
    }
 cout<<r;   
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int array[n];
    getdata(array, n);   
    setdata(array, n); 
    return 0;
}
