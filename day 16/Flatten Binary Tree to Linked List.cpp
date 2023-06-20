#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void help(TreeNode<int>*root , TreeNode<int>*&temp)
{
    if(root==NULL) return ;
    help(root->right , temp);
    help(root->left , temp);
    root->right=temp;
    root->left=NULL;
    temp=root;
}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here
    TreeNode<int>* ans=NULL;
    help(root , ans);
    return root;
}
