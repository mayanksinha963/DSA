#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *insert (node *&prev, node *&curr, node *&second)
{
    
    prev->next = second;
    node *next1;
    next1 = second->next;
    second->next = curr;
    prev = second;
    second= next1;
    
    
}
node * mergesort (node* first, node *second)
{
   if (first == NULL)
   {
    return second;
   }
   if (second == NULL)
   {
    return first;
   }
   
   node *prev = first;
   node *curr = first->next;
   while (curr != NULL && second != NULL)
   {
    
    if (second->data >= prev->data && second->data <= curr->data)
    {
        
        insert(prev, curr, second);
        
    }
    else{
        prev = curr;
        curr = curr->next;
        if (curr->next == NULL)
    {   
        prev->next= second;
        return first;
    }
        
   
    }
    //prev = prev->next;
    // cout<<prev->data;
    
    
   }

   
   
   
    return first;
    
    
}

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();

    n1->data = 1;
    n1->next = n2;

    n2->data = 3;
    n2->next = n3;

    n3->data = 4;
    n3->next = n4;

    n4->data = 5;
    n4->next = NULL;

    //print(n1);

    node *h1 = new node();
    node *h2 = new node();
    node *h3 = new node();
    node *h4 = new node();

    h1->data = 1;
    h1->next = h2;

    h2->data = 1;
    h2->next = h3;

    h3->data = 2;
    h3->next = h4;

    h4->data = 6;
    h4->next = NULL;

    //print(h1);

    n1 = mergesort(n1, h1);
    print(n1);
    
    return 0;
}
