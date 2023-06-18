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

class BSTiterator
{
    public:
    vector<TreeNode<int>*>nums;
    int i;
    void help(TreeNode<int>*root , vector<TreeNode<int>*>&nums)
    {
        if(root==NULL) return ;
        help(root->left , nums);
        nums.push_back(root);
        i++;
        help(root->right , nums);
    }
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        help(root , nums);
        i=0;

    }

    int next()
    {
        if(i<nums.size())
        {
            return nums[i++]->data;
        }
        // write your code here
    }

    bool hasNext()
    {
        if(i<nums.size()) return true;
        return false;
        // write your code here
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
