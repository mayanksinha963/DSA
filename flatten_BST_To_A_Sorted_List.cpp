#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void preorder (TreeNode<int>* root, vector<int> &v)
{
    if(root== NULL)
    {
        return;
    }

    preorder(root->left, v);
    v.push_back(root->data);
    preorder(root->right, v);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int>v;
    preorder(root, v);
    
    TreeNode<int>* newroot = new TreeNode<int>(v[0]);
    TreeNode<int>* curr = newroot;

    int n = v.size();
    
    for(int i = 1; i<n; i++)
    {
        TreeNode<int>* temp = new TreeNode<int>(v[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    
    curr->left = NULL;
    curr->right = NULL;
    
    return newroot;
    
    
}
