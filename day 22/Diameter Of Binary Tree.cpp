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
int help(TreeNode<int>* root ,int  &ans)
{
    if(root==NULL) return 0;
    int l=0 , r=0;
    if(root->left) l=1+help(root->left , ans);
    if(root->right)r=1+help(root->right , ans);
    ans=max(ans , l+r);
    return max(l, r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    int ans=0;
    help(root , ans);
    return ans;
	// Write Your Code Here.
}
