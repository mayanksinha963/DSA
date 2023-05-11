#include<iostream>
using namespace std;
void final(int array[], int n);
void getdata (int array[], int n);
void setdata(int array [], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array of index "<<i<<" : ";
        cin>>array[i];
    }
    getdata(array, n);
}
void getdata(int array [], int n)
{
    int counter = 0;
    int result[n];
    for (int i = 0; i < n; i++)
    {
        counter += array[i];
        result[i] = counter;
        
    }

   final(result, n);
   

}
void final (int array[], int n)
{
 cout<<"Cumulative sum is ";   
    for (int i = 0; i < n; i++)
    {
        
        cout<<array[i]<<" ";
    }
    
}






int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of array"<<endl;
    cin>>n;
    int array[n];
    setdata(array, n);
    
    
    return 0;
}
