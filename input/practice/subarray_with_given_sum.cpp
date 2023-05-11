#include<iostream>
using namespace std;
void setdata (int array[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter the array at index "<<i<<" : ";
        cin>>array[i];
    }
    
}

void getdata(int array[], int num, int sum)
{
    for (int i = 0; i < num; i++)
    {
        int counter = 0;
        for (int j = i; j < num; j++)
        {
    
            
                counter += array[j];
                //cout<<counter<<endl;
                if (counter == sum )
                {
                    cout<<"The sum of the element from the "<<i<<"st"<<" position to "<<j<<"th position"<<endl;
                }
                
            
            
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number of array"<<endl;
    cin>>num;
    int array[num];
    setdata(array, num);
    int sum;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
    getdata(array, num, sum);
    return 0;
}
