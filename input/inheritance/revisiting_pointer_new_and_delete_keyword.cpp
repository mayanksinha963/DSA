#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float *p = new float (40.78);
    cout<<"The value at address P is "<<*(p)<<endl;
    cout<<"\n";


    int *arr = new int[3];
    arr [0] = 10;
    arr [1] = 20;
    arr [2] = 30;
    cout<<"Value of arr [0] is "<<arr[0]<<endl;
    cout<<"Value of arr [1] is "<<arr[1]<<endl;
    cout<<"Value of arr [2] is "<<arr[2]<<endl;
    cout<<"\n";

    int *array = new int [3];
    array [0] = 40;
    *(array + 1) = 50;
    array [2] = 60;
    delete[] array;
    cout<<"Value of arr [0] is "<<array[0]<<endl;
    cout<<"Value of arr [1] is "<<array[1]<<endl;
    cout<<"Value of arr [2] is "<<array[2]<<endl;


    return 0;
}
