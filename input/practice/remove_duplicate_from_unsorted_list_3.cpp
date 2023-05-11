#include<iostream>
#include<map>

using namespace std;

class node {
    public :
    int data;
    node* next;
};

node* deletion (node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node* curr = head;
    node* prev;
    map<int, int>visited;

    while (curr != NULL)
    {
        if(visited[curr->data] == 0)
        {
            visited[curr->data] = 1;
            prev = curr;
            curr = curr->next;
        }
        else {
            node* next_next = curr->next;
            prev->next = curr->next;
            delete(curr);
            curr = next_next;
        }
    }
    return head;
    
}

void print (node *ptr)
{
    while (ptr != NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
    
}

int main(int argc, char const *argv[])
{
    node *n1 = new node ();
    node *n2 = new node ();
    node *n3 = new node ();
    node *n4 = new node ();
    node *n5 = new node ();

    n1->data = 1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3->data = 3;
    n3->next = n4;

    n4->data = 2;
    n4->next = n5;

    n5->data = 1;
    n5->next = NULL;

    deletion(n1);

    print(n1);


    return 0;
}
