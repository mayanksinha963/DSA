#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/


pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
   int pre = -1;
   int suc = -1;
   
   BinaryTreeNode<int> *temp = root;
   
   while(temp->data != key)
   {
       if(temp->data > key)
       {
           suc = temp->data;
           temp = temp->left;
       }
       else
       {
           pre = temp->data;
           temp= temp->right;
       }
   } 

   BinaryTreeNode<int>* leftnode = temp->left;
   
   while(leftnode != NULL)
   {
       pre = leftnode->data;
       leftnode = leftnode->right;
   }

   BinaryTreeNode<int>* rightnode = temp->right;
   while(rightnode != NULL)
   {
       suc = rightnode->data;
       rightnode = rightnode->left;
   }

   pair<int, int>ans = make_pair(pre, suc);
   return ans;
   
}
