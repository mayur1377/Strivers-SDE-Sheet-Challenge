int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
    if(root==NULL) return -1;
    if(root->data==x) return x;
    if(root->data==y) return y;
    int left=lowestCommonAncestor(root->left,  x,  y);
    int right=lowestCommonAncestor(root->right,  x,  y);
    if(left!=-1 and right!=-1) return root->data;
    return max(left , right);
}
