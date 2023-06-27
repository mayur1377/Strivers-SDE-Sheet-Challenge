#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long help(TreeNode<int>*root , long long &ans)
{
    if(root==NULL) return -1e9;
    if(root->left==NULL and root->right==NULL) return root->val;
    long long l=help(root->left , ans);
    long long r=help(root->right , ans);
    if(l==-1e9 or r==-1e9)
    {
        return max(l , r)+root->val;
    }
    ans=max(ans , l+r+root->val);
    return max(l , r)+root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    long long ans=-1;
    if(root==NULL) return -1;
    help(root , ans);
    return ans;
}
