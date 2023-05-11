#include<iostream>
#include<queue>


using namespace std;

class node 
{
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

node *buildtree (node* root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new node (data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter the data for insertion of data "<<data<<endl;
    root->left =buildtree(root->left);
    root->right = buildtree(root->right);

}

void traverse (node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int count;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            
            count++;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else
        {
            
            if (temp->left)     
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            
            
        }
        
    }
    cout<<count;
    
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    root = buildtree(root);
    traverse(root);
    return 0;

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}
