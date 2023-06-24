#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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
int help(TreeNode<int>*root , int &k)
{
    if(root==NULL) return -1;
    int left=help(root->left , k);
    if(left!=-1) return left;
    k--;
    if(k==0) return root->data;
    int right=help(root->right , k);
    if(right!=-1) return right;
}
int kthSmallest(TreeNode<int> *root, int k)
{
	return help(root , k);
}
