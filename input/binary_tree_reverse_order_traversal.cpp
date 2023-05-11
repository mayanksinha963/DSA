#include<iostream>
#include<stack>
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

    cout<<"Enter the data for insertion in left of "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the data for insertio in  right of "<<data<<endl;
    root->right = buildtree(root->right);
}

void reversetransverse (node *root)
{
    queue<node*>q;
    stack<node*>s;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        
        q.pop();
        s.push(temp);
        if(temp == NULL)
        {
            
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            //cout<<temp->data<<" ";
            if (temp->right)
            {
                q.push(temp->right);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            
            

        }
    }

    while (!s.empty())
    {
        //cout<<1;
        node* res = s.top();
        if (res == NULL)
        {
           cout<<endl;
        }
        else
        {
            cout<<res->data<<" ";
        }
        
        
        s.pop();
    }
    
    
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    root = buildtree(root);
    reversetransverse(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    return 0;
}
