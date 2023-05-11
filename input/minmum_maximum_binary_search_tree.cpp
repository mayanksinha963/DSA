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

node* createbst (node *&root, int data)
{
    if (root == NULL)
    {
        root = new node (data);
        return root;
    }

    if (root->data < data)
    {
        root->right = createbst(root->right, data);
    }

    if (root->data > data)
    {
        root->left = createbst(root->left, data);
    }

    return root;
}

void bst (node *&root)
{
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    while (data != -1)
    {
        createbst(root, data);
        cin>>data;
    }
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

void printmini (node* root)
{
    node *temp = root;
    while (temp->left != NULL)
    {
        //cout<<temp->data;
        temp = temp->left;
    }

    cout<<temp->data;

}

void printminirec (node *root)
{
    if (root->left == NULL)
    {
        cout<<root->data;
        return;
    }

    printminirec(root->left);
    
}

void printmax (node *root)
{
    node* temp = root;
    while (root->right != NULL)
    {
        root = root->right;
    }

    cout<<root->data;
    
}

void printmaxrec (node *root)
{
    if(root->right == NULL)
    {
        cout<<root->data;
        cout<<endl;
    }

    printmaxrec(root->right);
}



int main(int argc, char const *argv[])
{
    node* root = NULL;
    bst(root);
    //levelOrderTranversal(root);
    printmini(root);
    cout<<endl;
    printminirec(root);
    cout<<endl;
    printmax(root);
    cout<<endl;
    printmaxrec(root);
    return 0;
}
