#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class stack
{
public:
    node *top;
    stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        node *temp = new node (data);
        if (!temp)
        {
            cout<<"Stack is overflow"<<endl;
            exit(1);
        }

        temp->data = data;
        temp->next = top;
        top = temp;
        
    }

    void pop()
    {
        if (top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            exit(1);
        }

        node* temp = top;
        top = top->next;
        free(temp);
        
    }

    int peek()
    {
        if (top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            exit(1);
        }
        
        return top->data;
    }

    bool isempty()
    {
        if (top == NULL)
        {
            cout<<"Stack is empty";
            exit(1);
        }
        else
        {
            cout<<"Stack is not empty"<<endl;
            exit(1);
        }
        
    }

    void display()
    {
        if (top ==  NULL)
        {
            cout<<"Stack is empty"<<endl;
            exit(1);
        }
        
        node *temp = top;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        
        
    }
};

int main(int argc, char const *argv[])
{
    stack s;
    s.push(1);
    s.push(3);
    cout<<s.peek();
    cout<<endl;
    s.display();
    s.pop();
    cout<<endl;
    s.display();
    s.isempty();
    return 0;
}
