#include<iostream>
#include<queue>
using namespace std;

class node {
    public :
    int data;
    node *left;
    node *right;

    node (int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraverse (node *&root)
{
    queue<node*>q;
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new node (data);
    q.push(root);


    while (!q.empty())
    {
        node * temp = q.front();
        q.pop();
        cout<<"Enter the left node for "<<temp->data<<endl;
        int leftnode;
        cin>>leftnode;
        if(leftnode != -1)
        {
            temp->left = new node (leftnode);
            q.push(temp->left);
        }

        cout<<"Enter the right for "<<temp->data<<endl;
        int rightnode;
        cin>>rightnode;
        if(rightnode != -1)
        {
            temp->right = new node (rightnode);
            q.push(temp->right);
        }
    }
    
}

void transverse (node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
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
            if (temp->left)
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
    node *root = NULL;
    levelOrderTraverse(root);
    transverse(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
}
