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
void createLL (TreeNode<int>*root, TreeNode<int> *&head)
{
    if(root == NULL)
    {
        return;
    }
    
    createLL(root->right, head);
    root->right = head;
    if(head != NULL)
    head->left = root;
    
    head = root;
    
    createLL(root->left, head);
    
}

int count (TreeNode<int> *root)
{
    // if(root == NULL)
    // {
    //     return 0;
    // }
    int cnt = 0;
    TreeNode<int>* curr = root;
    while(curr != NULL)
    {
        cnt++;
        curr = curr->right;
    }
    return cnt;
}

TreeNode<int>* merge(TreeNode<int> *head1, TreeNode<int> *head2)
{
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;


    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data < head2->data)
        {
            if(head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else 
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
                
            }
        }
        else 
        {
            if(head == NULL)
            {
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else 
            {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
                
            }
        }
    }
    
    while (head1!= NULL)
    {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;   
    }

    while(head2 != NULL)
    {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;       
    } 
    return head;   
}

TreeNode<int> *LLtoBST(TreeNode<int> *&head, int n)
{
    if(n <= 0 || head == NULL)
    {
        return NULL;
    }

    TreeNode<int>*left = LLtoBST(head, n/2);
    
    TreeNode<int>*root = head;
    
    root->left = left;
    head = head->right;
    
    root->right = LLtoBST(head, n-n/2-1);

    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    TreeNode<int> *head1 = NULL;
    createLL(root1, head1);
    head1->left = NULL;
    
    TreeNode<int> *head2 = NULL;
    createLL(root2, head2);
    head2->left = NULL;

    TreeNode<int> *head = merge(head1, head2);

    int n = count(head);

    return LLtoBST(head, n);
}