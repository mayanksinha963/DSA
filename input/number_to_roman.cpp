#include<iostream>
#include<string>


using namespace std;
string value (int n)
{
    if (n == 1)
    {
        return "I";
    }
    else if (n == 4)    
    {
        return "IV";
    }
    else if (n == 5)
    {
        return "V";
    }
    else if (n == 9)
    {
        return "IX";
    }
    else if (n == 10)
    {
        return "X";
    }
    
}

string* ntr (int num)
{
    string* n = new string[10];
  
  int i = 0;
  int a;
    
    while (num != 0)
    {
        if (num < 4)
        {
            a = num -1;
            num = a;
            n[i] = value(1);
            i++; 
        }
        else if (num == 4)
        {
            a = num-4;
            num = a;
            n[i] = value(4);
            i++;
        }
        else if (num == 10)
        {
            a = num-10;
            num = a;
            n[i] = value(10);
            i++;
        }
         else if (num == 10)
        {
            a = num-10;
            num = a;
            n[i] = value(10);
            i++;
        }
        
        
    }
   return n;
}

int main(int argc, char const *argv[])
{
   string* a = ntr(10);
   for (int i = 0; i < 10; i++)
   {
       cout<<a[i];
   }
   
    return 0;
}
