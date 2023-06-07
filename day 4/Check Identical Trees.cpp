#include <bits/stdc++.h> 
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
     if(root1==NULL and root2==NULL) return 1;
     if((root1==NULL and root2) or (root1 and root2==NULL)) return 0;
     if(root1->data!=root2->data) return 0;
     return identicalTrees(root1->left , root2->left ) and identicalTrees(root1->right , root2->right);
}

//tc  , sc: big 0 of n
