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
long long ans=0;
long long help(TreeNode<int>* root)
{
    if(root==NULL) return 0;
    long long leftmax=help(root->left);
    long long rightmax=help(root->right);
    leftmax=max(leftmax , (long long)0);
    rightmax=max(rightmax , (long long)0);
    ans=max(ans , root->val+leftmax+rightmax );
    return root->val+max(leftmax , rightmax);
}
void counter(TreeNode<int>*root , int &count)
{
    if(root==NULL) return ;
    if(root->left==NULL and root->right==NULL)
    {
        count++;
        return ;
    }
    counter(root->left , count);
    counter(root->right , count);
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    if(root==NULL) return -1;
int count=0;
counter(root , count);
if(count==1) return -1;
ans=root->val;
help(root);
return ans;
}
