#include<iostream>
using namespace std;
void setdata(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array of index "<<i<<" : ";
        cin>>array[i];
    }
    
}

int getdata(int array[], int n)
{
    int m;
    int r;
    for (int i = 0; i < n-1; i++)
    {
        m = max(array[i], array[i+1]);
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           
            if (i == array[j])
            {
                r = 1;
                break;
            }
            else {
                r = -1;
            }
            
        }
        if (r == -1)
        {
            cout<<i;
            return 0;
        }
        
        
    }
    
    
    
    
    
return 0;
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
