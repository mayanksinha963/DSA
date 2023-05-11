#include<iostream>
using namespace std;
class node {
    public :
    int data;
    node* next;
};

bool palindrome(node *&head)
{
    int length= 0;
    node* ptr = head;
    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    ptr = head;
    if (length % 2 != 0)
    {
        length = length/2;
        while (length != 0)
        {
            ptr = ptr->next;
            length--;
        }
        node *prev = NULL;
        node *curr = ptr->next;
        node *forward= NULL;
        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        ptr->next = prev;
        
        node* check = ptr->next;
        ptr = head;
        while (check != NULL)
        {
            if (ptr->data != check->data)
            {
                return false;
            }
            ptr = ptr->next;
            check = check->next;
            
        }
        return true;
        
    }
    
    
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
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();
    node* n4 = new node();
    node* n5 = new node();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 2;
    n4->next = n5;

    n5->data = 5;
    n5->next = NULL;
    


    cout<<palindrome(n1);
    
    return 0;
}
