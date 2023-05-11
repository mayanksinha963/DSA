#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *buildtree(node *root)
{
    int data;
    cout << "Enter the data" << endl;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for the insertion of the data " << data << endl;
    root->left = buildtree(root->left);
    root->right = buildtree(root->right);
}

void transverse(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        transverse(root->left);
        transverse(root->right);
    }
}

bool solution1(node *root)
{

    if (root == NULL)
    {
        return true;
    }

    return solution1(root->left) + root->data + solution1(root->right);
    
}

bool isSumTree(node *root)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return 1;
    }

    int ls = solution1(root->left);
    int rs = solution1(root->right);

    if ((root->data == ls + rs))
    {
        return true;
    }
    isSumTree(root->left);
    isSumTree(root->right);
    
    return false;
    
    
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    root = buildtree(root);
    // transverse(root);
    cout <<isSumTree(root);
    // 62 16 15 -1 8 4 7 -1 8 4
    return 0;
}
