#include<bits/stdc++.h>
void helpl(TreeNode<int>* root,vector<int>&ans){
    if(root==NULL) return;
    if(root->left==NULL and root->right==NULL) return;
    ans.push_back(root->data);
    if(root->left) helpl(root->left,ans);
    else if(root->right) helpl(root->right,ans);
}
void leaf(TreeNode<int>* root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    if(!root->left && !root->right){
        ans.push_back(root->data);
        return;
    }
    if(root->left)
    leaf(root->left,ans);
    if(root->right)
    leaf(root->right,ans);
}
void helpr(TreeNode<int>* root,vector<int>&v){
    if(root==NULL) return;
    if(root->left==NULL and root->right==NULL) return;
    v.push_back(root->data);
    if(root->right) helpr(root->right,v);
    else if(root->left) helpr(root->left,v);
}
vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int>ans;
    if(root->left==NULL and root->right==NULL){
        ans.push_back(root->data);
        return ans;
    }
    vector<int>v;
    ans.push_back(root->data);
    if(root->left) helpl(root->left,ans);
    leaf(root,ans);
    if(root->right) helpr(root->right,v);
    reverse(v.begin(),v.end());
    for (auto i : v) ans.push_back(i);
    return ans;
}
