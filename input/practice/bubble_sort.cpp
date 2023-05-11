#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int array[] = {67,98,45,8,9,45};
    int size = sizeof(array)/sizeof(int);
    cout<<size<<endl;
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size-j; i++)
    {
        if (array[i]>array[i+1])
        {
            int temp;
            temp = array [i];
            array[i] = array [i +1];
            array[i+1] = temp;
        }
        
    }
    }
    
    
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    return 0;
}
