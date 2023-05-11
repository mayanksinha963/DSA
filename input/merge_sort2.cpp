#include<iostream>

using namespace std;

void merging (int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    //cout<<"Mayank";
    int i = 0, j= 0, k =0;
    int arr4 [10];
    //int arr3 [9];
    while (i != n1 && j != n2)
    {
        // cout<<"Sinha";
        // cout<<i<<endl;
        // for (int i = 0; i < n2; i++)
        // {
        //     cout<<arr2[i]<<endl;
        // }
        
        if (arr1[i]>arr2[j])
        {
            
            arr3[k] = arr2[j];
            j++;
            
            //cout<<"1"<<endl;
        }
        else if (arr1[i]<arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            
            //cout<<"2"<<endl;
        }
        else if (arr1[i] == arr2[j])
        {
            arr3[k] = arr2[j];
            j++;
            
        }
        k++;
    }
    if (i == n1)
    {
        for (; j <= n2; j++)
        {
            arr3[k] = arr2[j];
            k++;
        }
    }
    else
    {
        //cout<<arr2[i]<<endl;
       for (; i <= n2; i++)
        {
            arr3[k] = arr1[i];
            k++;
        } 
    }
    
}
int main(int argc, char const *argv[])
{
    int arr1[]= {7, 9, 18, 19, 22};
    int n1= 5;
    int arr2[]= {1, 6, 9, 11};
    int n2 = 4;
    int arr3[9];
    //cout<<"Mayank";
    merging(arr1, n1, arr2, n2, arr3);
    
    for (int i = 0; i < 9; i++)
    {
        cout<<arr3[i]<<" ";
    }
    //cout<<"Mayank";
    

    //merging (arr1, n1, arr2, n2, arr3);
    
    return 0;
}
