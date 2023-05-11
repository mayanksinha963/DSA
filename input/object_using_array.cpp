#include<iostream>
using namespace std;
class Shop 
{
    int num (int a){
        return a;
    }
    int itemId [100];
    int itemPrice [100];
    int counter;

public :
    void intitCounter (void)
    {
        counter = 0;
    }
    void setPrice (void);
    void displayPrice (void);
};

void Shop :: setPrice (void) {
    cout<<"Enter Id of your item no "<<counter + 1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item "<<endl;
    cin>>itemPrice [counter];
    counter ++;
}
void Shop :: displayPrice (void) 
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of your item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    
    Shop dukkan;
    dukkan.setPrice ();
    dukkan.displayPrice ();
    
    return 0;
}
