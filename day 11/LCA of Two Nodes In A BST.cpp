#include <bits/stdc++.h> 
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root==NULL) return root;
    while(root)
    {
        if(root->data>P->data and root->data>Q->data) root=root->left;
        else if(root->data<P->data and root->data<Q->data) root=root->right;
        else return root;
    }
    return NULL;
}
