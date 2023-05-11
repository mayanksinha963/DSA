#include<iostream>
using namespace std;

class node {
    public :
    int data;
    node* next;
    node (int data)
    {
        this->data = data;
        next = NULL;
    }
};

class stack {
    public :
    node *top;
    stack ()
    {
        top = NULL;
    }

    void push (int data)
    {
        
        node *temp = new node(data);

        if (!temp)
        {
            
            cout<<"Stack is overflow"<<endl;
            return;
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
            return;
        }

        node* temp = top;
        top = top->next;
        free(temp);
        
    }

    int peek ()
    {
        if (top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            exit(1);
        }
        
        return top->data;
        
    }

    bool isempty ()
    {
        if (top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }
        else 
        {
            cout<<"Stack is not empty"<<endl;
            return 0;
        }
        
    }

    void display ()
    {
        if (top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
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
    s.push(0);
    s.pop();
    s.pop();
    s.isempty();
    s.pop();
    cout<<s.peek();
    s.display();
    return 0;
}
