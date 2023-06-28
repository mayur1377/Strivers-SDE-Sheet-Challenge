#include<bits/stdc++.h>
int ct;
long long int func(TreeNode<int> *root, long long int &maxi)
{
    if(root == NULL) return 0;
    // child node
    if(root -> left == NULL && root -> right == NULL) ct++;
    long long int left = func(root->left, maxi);
    long long int right = func(root->right, maxi);

    maxi = max(maxi, left + right + root->val);

    // here returning , max from that node
    return max(left, right) + root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(root == NULL) return -1;
    long long int maxi = INT_MIN;
    ct = 0;
    func(root, maxi);
    if(ct == 1) return -1;
    return maxi;
}
