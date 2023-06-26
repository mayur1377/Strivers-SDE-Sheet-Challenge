#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void help(BinaryTreeNode<int>*root , vector<int>&nums)
{
    if(root==NULL) return ;
    help(root->left , nums);
    nums.push_back(root->data);
    help(root->right , nums);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<int>nums;
    help(root,nums);
    int low=0;
    int high=nums.size();
        // pair<int , int>ans={-1 , -1};

    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(nums[mid]==key)
        {
            pair<int , int>ans;
            if(mid-1>=0) ans.first=nums[mid-1];
            else ans.first=-1;
            if(mid+1<nums.size()) ans.second=nums[mid+1];
            else ans.second=-1;
            return ans;
        }
        else if(key<nums[mid])
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    pair<int , int>ans={-1 , -1};
    return ans;
}
