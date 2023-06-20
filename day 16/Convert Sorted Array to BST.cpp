#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* help(vector<int>&nums, int low , int high)
{
    if(low>high) return NULL;
    int mid=(low+high)/2;
    TreeNode<int>* root =new TreeNode<int>(nums[mid]);
    root->left=help(nums , low , mid-1);
    root->right=help(nums , mid+1 , high);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return help(arr , 0 , n-1);
}
