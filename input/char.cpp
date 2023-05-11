#include <iostream>
using namespace std;

string mychar()
{
    return "H";
}

char* mycharstack()
{
    char* ch = "Hello Stack";
    return ch;
}

char* mycharheap()
{
    char* ch = new char;
    ch = "Hello Heap";
    return ch;
}

int main()
{
    cout << "mychar() = " << mychar() << endl;
    cout << "mycharstack() = " << mycharstack() << endl;
    cout << "mycharheap() = " << mycharheap() << endl;

    system("PAUSE");
    return 0;
}