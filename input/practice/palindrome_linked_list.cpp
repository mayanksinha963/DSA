#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node* next;
};

bool check (node *head)
{
    int length= 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    
    
    int arr[length];
    ptr = head;
    int i =0;
    while (ptr != NULL)
    {
        arr[i] = ptr->data;
        ptr= ptr->next;
        i++;
    }

    // for (int i = 0; i < length; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    i =0;
    while (i <= length-1)  
    {
        if (arr[i] != arr[length-1])
        {
            
            return false;
        }
        i++;
        length--;
        
    }
    return true;
    
    
    
}

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}

int main(int argc, char const *argv[])
{
    node* n1 = new node ();
    node* n2 = new node ();
    node* n3 = new node ();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = NULL;

    //print(n1);
    cout<<check(n1);

    return 0;
}
