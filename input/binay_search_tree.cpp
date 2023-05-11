#include<iostream>
#include<queue>

using namespace std;

class Node 
{
    public :
    int data;
    Node *left;
    Node *right;

    Node (int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* insertatbst (Node* &root, int data)
{
    if(root == NULL)
    {
        root = new Node (data);
        return root;
    }

    if(data > root->data)
    {
        root->right = insertatbst(root->right, data);
    }

    if(data < root->data)
    {
        root->left = insertatbst(root->left, data);
    }

    return root;
}

void bst(Node *&root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    while (data != -1)
    {
        insertatbst(root, data);
        cin>>data;
    }
    
}

void print (Node *root)
{
    if(root == NULL)
    {
        return;
    }

    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;
    bst (root);
    print(root);
    return 0;
}
//10 8 21 7 27 5 4 3 -1