#include <bits/stdc++.h> 
TreeNode<int>* help(vector<int>&nums , int s , int e)
{
    if(s>e) return NULL;
    TreeNode<int>*root =new TreeNode<int>(nums[s]);
    int i=s+1;
    for(i ; i<=e ; i++) 
    {
        if(nums[s]<nums[i]) break;
    }
    root->left=help(nums , s+1 , i-1);
    root->right=help(nums , i , e);
    return root;

}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
return help(preOrder , 0 , preOrder.size()-1);
}
