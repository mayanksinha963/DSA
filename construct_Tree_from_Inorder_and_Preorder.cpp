
/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int findpos (int val, int n, int in[], int start)
    {
        for(int i=start; i<n; i++)
        {
            if(in[i]== val)
            {
                return i;
            }
        }
        
    }
    Node *solve (int in[], int pre[], int n, int &index, int preindexstart, int preindexend)
    {
        if(index >= n || preindexstart > preindexend)
        {
            return NULL;
        }
        int element = pre[index++];
        Node *root = new Node (element);
        
        int pos = findpos(element, n, in, preindexstart);
        
        //index++;
        
        root->left = solve(in, pre, n, index, preindexstart, pos-1);
        root->right = solve(in, pre, n, index, pos+1, preindexend);
        
        return root;
        
        
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int index = 0;
        Node* ans = solve(in, pre, n, index, 0, n-1);
        return ans;
    }
};