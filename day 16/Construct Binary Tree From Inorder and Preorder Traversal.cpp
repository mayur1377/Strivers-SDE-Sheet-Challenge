#include<bits/stdc++.h>
TreeNode<int>* help(vector<int>&inorder , int is , int ie , vector<int>&preorder , int ps , int pe , map<int , int>&m)
{

    if(is>ie or ps>pe) return NULL;
    TreeNode<int>*root =new TreeNode<int>(preorder[ps]);
    int ind=m[preorder[ps]];
    int size=ind-is;
    root->left=help(inorder , is ,  ind-1 , preorder ,  ps+1  ,  ps+size  , m);
    root->right=help(inorder , ind+1     , ie    , preorder , ps+size+1   ,  pe , m);
    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    map<int,int>m;
    for(int i=0 ; i<inorder.size() ; i++) m[inorder[i]]=i;
    return help(inorder , 0 , inorder.size()-1 , preorder , 0 , preorder.size()-1 , m);
}
