#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
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
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void help(TreeNode<int>* root , int k , int &ans ,int &i)
{
    if(root==NULL) return ;
    help(root->right , k , ans , i);
    i++;
    if(i==k)
    {
        ans=root->data;
        return ;
    }
    help(root->left , k , ans , i);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    int ans=-1;
    int i=0;
    help(root , k , ans , i);
    return ans;
}
