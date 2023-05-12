#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/
void preorder (BinaryTreeNode<int>* root, vector<int> &v)
{
    if(root == NULL)
    {
        return;
    }
    preorder(root->left, v);
    v.push_back(root->data);
    preorder(root->right, v);
    
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int>v;
    preorder(root, v);
    int i = 0;
    int j = v.size()-1;

    while(i<j)
    {
        if(v[i]+v[j]== target)
        {
            return true;
        }
        else if (v[i]+v[j] < target)
        {
            i++;
        }
        else if (v[i] + v[j] > target)
        {
            j--;
        }
    }

    return false;
    

}