int findH(BinaryTreeNode<int>* root){
        if(root==NULL) return 0;
        int lh = findH(root->left);
        if(lh==-1) return -1;
        int rh  = findH(root->right);
        if(rh == -1) return -1;
        if(abs(lh-rh)>1) return -1;
        return max(lh,rh)+1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    return (findH(root) != -1);
}
