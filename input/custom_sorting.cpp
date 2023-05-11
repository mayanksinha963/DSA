#include<iostream>
using namespace std;

void sorting (int array[], int size, int value)
{
    int a[size];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        //cout<<arr[i];
        if (value > array[i])
        {
            a[j] = array[i];
            j++;
        }
        
    }
    
    for (int i = 0; i < j; i++)
    {
        for (int k = i; k < j; k++)
        {
            if (a[i]>a[k])
        {
            int temp;
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
        }
        
        
        //cout<<a[i];
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        if (value < array  [i])
        {
            a[j] = array[i];
            //cout<<a[j];
            j++;
            //cout<<a[j];
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        if (value == array [i])
        {
            a[j] = array[i];
            j++;
        }
        
    }
    
    for (int i = 0; i < j; i++)
    {
        for (int k = i; k < j; k++)
        {
             if (a[i]>a[k])
        {
            int temp;
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
        }
     //cout<<a[i];   
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

int main(int argc, char const *argv[])
{
    int array []= {9, 3, 2, 4, 1, 0 ,8, 10 , 7};
    int size = 9;
    sorting(array, 9, 0);

    return 0;
}
