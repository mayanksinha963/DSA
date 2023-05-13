/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root, vector<int> &v)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right,v);
}

TreeNode<int>* inordertobst(TreeNode<int>* newroot, vector<int> v, int start, int end)
{
    if(start > end)
    {
        return NULL;
    }
    
    int mid = (start + end)/2;
    
    newroot = new TreeNode<int>(v[mid]);
    newroot->left = inordertobst(newroot, v, start, mid-1);
    newroot->right = inordertobst(newroot, v, mid+1, end);
    return newroot;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int>v;
    inorder(root, v);
    int start = 0;
    int end = v.size()-1;
    
    TreeNode<int>* newroot = NULL;
    return inordertobst(newroot, v, start, end);
}
