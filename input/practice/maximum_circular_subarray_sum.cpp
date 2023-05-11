#include<iostream>
using namespace std;
void setdata(int array [], int n)
{
    for (int  i = 0; i < n; i++)
    {
        cout<<"Enter the element of index "<<i<<" : ";
        cin>>array[i];
    }
    
    
}
void getdata (int array [], int n)
{
    int mini =0;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, array[i]);
    }
    //cout<<mini<<endl;

int counter =0;
int r =0;
    for (int i = 0; i < n; i++)
    {
        counter += array[i];
    }
    cout<<"Maximum Sum is "<<counter-mini<<endl;

}


int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of array : ";
    cin>>n;
    int array[n];
    setdata(array, n);
    getdata(array, n);
    return 0;
}
