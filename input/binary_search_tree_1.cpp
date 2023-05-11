#include<iostream>
#include<queue>

using namespace std;

class Node {
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

Node *createbst (Node* &root, int data)
{
    if(root == NULL)
    {
        root = new Node (data);
        return root;
    }

    if (data > root->data)
    {
        root->right = createbst(root->right, data);
    }

    if(data < root->data)
    {
        root->left = createbst(root->left, data);
    }

    return root;
}



void bst (Node *&root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;

    while (data != -1)
    {
        createbst (root, data);
        cin>>data;
    }
    
}

void print (Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            else
            {
                cout<<front->data<<" ";
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
                
                
            }
            
        }
        
    }
    
    
}

int main(int argc, char const *argv[])
{
    Node* root = NULL;
    bst(root);
    print(root);
    return 0;
}
