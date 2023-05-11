#include<iostream>
using namespace std;
void setdata(int array [],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Value of index "<<i<<" : ";
        cin>>array[i];
    }
    
}

void getdata(int array[], int n)
{
    int count=0;
    int result=0;
    
    for (int i = 0; i < n-1; i++)
    {
        int a = result;
        count = 0;
        for (int j = i+1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count ++;
                //cout<<count<<endl;
                //cout<<array[i]<<" "<<array[j]<<endl;;
            }
            
        }
        result = max(a, count);
    }
    cout<<result+1;
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
