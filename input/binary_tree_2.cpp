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

node* buildtree (node *root)
{
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new node (data);
    if (data == -1)
    {
        return NULL;
    }

    
    cout<<"Enter the data for insertion of left of : "<<data<<endl;
    
    root->left =  buildtree(root->left);
    
    
    cout<<"Enter the data for insertion of right of : "<<data<<endl;
    
    root->right = buildtree(root->right);
    
}

void traverse (node *root)
{
    queue<node*>q;
    q.push(root);

    while (!q.empty())
    {
        node* temp =  q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {
            q.push(temp->right);
        }
        
    }
    

}


int main(int argc, char const *argv[])
{
    node *root = NULL;
    root = buildtree(root);
    traverse(root);
    return 0;
}
