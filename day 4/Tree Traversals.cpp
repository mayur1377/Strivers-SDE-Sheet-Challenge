#include <bits/stdc++.h> 
void in(BinaryTreeNode<int>*root , vector<int>&temp)
{
    if(root==NULL) return ;
    in(root->left , temp);
    temp.push_back(root->data);
    in(root->right , temp);
}

void pr(BinaryTreeNode<int>*root , vector<int>&temp)
{
    if(root==NULL) return ;
        temp.push_back(root->data);

    pr(root->left , temp);
        pr(root->right , temp);
}

void po(BinaryTreeNode<int>*root , vector<int>&temp)
{
    if(root==NULL) return ;
    po(root->left , temp);
    po(root->right , temp);
        temp.push_back(root->data);

}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>temp;
    in(root , temp);
    ans.push_back(temp);
    temp.clear();
    pr(root , temp);
    ans.push_back(temp);
    temp.clear();
    po(root , temp);
    ans.push_back(temp);
    return ans;
}
