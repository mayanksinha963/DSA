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

node *buildtree (node *root)
{
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;

    root = new node (data);
    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter the data for inserting in left of "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the data for inserting in right of "<<data<<endl;
    root->right = buildtree(root->right);
}

void levelOrderTranversal (node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
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
    node *root = NULL;
    root = buildtree(root);
    levelOrderTranversal(root);
    return 0;
    //2 1 10 -1 -1 3 -1 -1 6 4 9 -1 5
}
