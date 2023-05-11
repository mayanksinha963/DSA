#include<iostream>
using namespace std;
class shopItem {
    int id;
    float price;
    public :
    void setData (int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata (void)
    {
        cout<<"Id of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};

int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the number of items"<<endl;
    cin>>size;
    int id,i;
    float price;
    shopItem *ptr = new shopItem [size];
    shopItem *ptrtemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of item "<<i+1<<endl;
        cin>>id>>price;
        (*ptr).setData(id, price);
        ptr ++;  
    };

    for (i = 0; i < size; i++)
    {
        cout<<"\n";
        cout<<"Item Number :"<<i+1<<endl;
        (*ptrtemp).getdata();
        ptrtemp++;
    };
    
    
    return 0;
}
