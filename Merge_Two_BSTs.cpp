#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/
void inorder(TreeNode<int> *root, vector<int> &inorder1)
{
    
   
    if(root == NULL)
    {
        return;
    }

    inorder(root->left, inorder1);
    inorder1.push_back(root->data);
    inorder(root->right, inorder1);
}

void merge (vector<int>&inorder1, vector<int>&inorder2, vector<int> &inorder3)
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(i <inorder1.size() && j<inorder2.size())
    {
        if(inorder1[i] < inorder2[j])
        {
            inorder3[k] = inorder1[i];
            k++;
            i++;
        }
        else
        {
            inorder3[k] = inorder2[j];
            k++;
            j++;
            
        }
    }

    while(i<inorder1.size())
    {
        inorder3[k] = inorder1[i];
        i++;
        k++;
    }

    while(j<inorder2.size())
    {
        inorder3[k] = inorder2[j];
        j++;
        k++;
    }
}

TreeNode<int>* inordertobst (vector<int>&inorder3, int s, int e)
{
    if(s > e)
    {
        return NULL;
    }
    
    int mid = (s+e)/2;
    
    TreeNode<int>* root = new TreeNode<int>(inorder3[mid]);
    root->left = inordertobst(inorder3, s, mid-1);
    root->right = inordertobst(inorder3, mid+1, e);

    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<int> inorder1;
    vector<int> inorder2;

    inorder(root1, inorder1);
    inorder(root2, inorder2);
    
    vector<int> inorder3(inorder1.size() + inorder2.size());
    merge(inorder1, inorder2, inorder3);
    

    // for(int i =0; i<inorder3.size(); i++)
    // {
    //     cout<<inorder3[i]<<" ";
    // }
    // cout<<endl;

    return inordertobst(inorder3, 0, inorder3.size()-1);
}

