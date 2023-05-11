#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node * next;
    // node (int data)
    // {
    //     this->data = data;
    //     this->next = NULL;

    // }
};

void print(node *head)
{
    node* ptr = head;
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
}

node* insertattail (node *&temp, node* ptr)
{
    temp->next = ptr;
    temp = ptr;
}

node *sort (node *&head)
{
    node *ptr = head;
    node *zerohead = new node();
    node *zerotail = zerohead;
    node* firsthead = new node ();
    node *firsttail = firsthead;
    node *secondhead = new node ();
    node *secondtail = secondhead;

    while (ptr != NULL)
    {
        int val = ptr->data;
        if (val ==0)
        {
            insertattail(zerotail, ptr);
        }
        else if (val == 1)
        {
            insertattail(firsttail, ptr);
        }
        else if(val == 2)
        {
            insertattail(secondtail, ptr);
        }
        ptr = ptr->next;
        
    }
    
    if (firsthead != NULL)
    {
        zerotail->next = firsthead->next;
    }
    else
    {
        zerotail->next = secondhead->next;
    }

    //cout<<zerotail->data<<endl;
    firsttail->next = secondhead->next;
    secondtail->next= NULL;
    head = zerohead;
    
    
    return head;
    
    

    
}

int main(int argc, char const *argv[])
{
    node* n1 = new node();
    node* n2 = new node();
    node* n3 = new node();
    node* n4 = new node();
    node* n6 = new node();
    node* n5 = new node();

    n1->data = 1;
    n1->next = n2;
    
    n2->data = 0;
    n2->next = n3;

    n3->data = 2;
    n3->next = n4;
    
    n4->data = 1;
    n4->next = n5;

    n5->data = 2;
    n5->next = n6;

    n6->data = -1;
    n6->next = NULL;

    sort(n1);

    print(n1);
    return 0;
}
