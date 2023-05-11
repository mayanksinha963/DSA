#include<iostream>
using namespace std;
class myArray
{
private:
    /* data */
public:
int total_size;
int used_size;
int *ptr;
};

void createArray (myArray *a, int tsize, int usize)
{
    a -> total_size = tsize;
    a -> used_size = usize;
    a ->ptr = (int *)malloc(tsize * sizeof(int));
}

void show (myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout<<a->ptr [i]<<endl;
    }
    
}

void setVal (myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        cout<<"Enter the element "<<i<<" : ";
        cin>>n;
        a->ptr[i] = n;
    }
    
}
int main(int argc, char const *argv[])
{
    myArray Marks;
    createArray (&Marks, 10, 2);
    cout<<"We are running setVal now"<<endl;
    setVal (&Marks);
    cout<<"We are running show now"<<endl;
    show (&Marks);
    return 0;
}
