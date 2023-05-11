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

node *createbst (node *&root, int data)
{
    if (root == NULL)
    {
        root = new node (data);
        return root;
    }

    if (root->data > data)
    {
        createbst(root->left, data);
    }
    if (root->data <data)
    {
        createbst(root->right, data);
    }
    // return root;
    
    
    
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

void print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
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

node *pre (node *&root)
{
    node *temp = root->left;
    while (temp->right)
    {
        temp = root->right;
    }
    return temp;
    

    
}

node* deletion(node *&root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            int mini = pre(root)->data;
            root->data = mini;
            
            //10 8 21 7 27 5 4 3 -1
            root->right = deletion(root->left, key);
            return root;
        }

        
    }
    
    if (root->data > key)
    {
        root->left = deletion(root->left, key);
        return root;
    }
    else
    {
        root->right = deletion(root->right, key);
        return root;
    }

    
    
    
    
    
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    bst(root);
    //print(root);
    int key = 21;
    cout<<endl;
    deletion(root, key);
    print(root);
    return 0;
}
