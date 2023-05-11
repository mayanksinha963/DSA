#include<iostream>
using namespace std;
void setdata (int array[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array of index "<<i<<" : ";
        cin>>array[i];
    }
    
}

void getdata (int array[], int n)
{
   // int a;
    int r =0;
    for (int i = 0; i < n; i++)
    {
        int counter=0;
        for (int j = i; j < n; j++)
        {
            counter += array[j]; 
            r = max(r, counter);
        }
        
    }
    cout<<"Maximum Sum is "<<r;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int array[n];
    setdata(array, n);
    getdata(array, n);
    return 0;
}
