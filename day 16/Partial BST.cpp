#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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
    };

*************************************************************/
bool help(BinaryTreeNode<int>*root , long long mini , long long maxi)
{
    if(root==NULL) return 1;
    if(root->data<mini or root->data>maxi) return false;
    return help(root->left , mini , root->data) and help(root->right , root->data , maxi);
}
bool validateBST(BinaryTreeNode<int> *root) {
    return help(root , LONG_MIN , LONG_MAX);
}
