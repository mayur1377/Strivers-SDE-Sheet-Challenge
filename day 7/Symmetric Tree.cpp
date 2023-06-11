/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool help(BinaryTreeNode<int>*root1 , BinaryTreeNode<int>*root2)
{
    if(root1==NULL and root2==NULL) return 1;
    if(root1==NULL and root2) return 0;
    if(root1 and root2==NULL) return 0;
    if(root1->data!=root2->data) return 0;
    return help(root1->left , root2->right) and help(root1->right , root2->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    return help(root , root); 
}
