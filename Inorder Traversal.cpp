#include<bits/stdc++.h>
void helper(TreeNode *root, vector<int> &v) {
    if(root == NULL) return;
    helper(root -> left, v);
    v.push_back(root -> data);
    helper(root -> right, v);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> v;
    helper(root, v);
    return v;
}
