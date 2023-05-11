#include<iostream>
using namespace std;
float moneyreceived (int currentmoney, float factor = 1.07){
    return currentmoney*factor;
}
int main(int argc, char const *argv[])
{
    int money = 10000;
    cout<<"If you have money "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money)<<"Rs after a year"<<endl;
    cout<<"For VIP: If you have money "<<money<<"Rs in you bank, you will receive "<<moneyreceived(money, 1.1)<<"Rs after a year"<<endl;
    
    return 0;
}
