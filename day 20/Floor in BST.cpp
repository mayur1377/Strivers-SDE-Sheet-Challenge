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
void help(TreeNode<int>*root ,int x , int &ans)
{
    if(root==NULL) return ;
    if(root->val>x) help(root->left , x , ans);
    else
    {
        ans=root->val;
        help(root->right , x , ans);
    }
}
int floorInBST(TreeNode<int> * root, int x)
{
    // Write your code here.
    int ans=-1;
    help(root , x , ans);
    return ans;
}
