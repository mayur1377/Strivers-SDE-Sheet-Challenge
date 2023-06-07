#include <bits/stdc++.h> 
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root==NULL) return 0;
    if(root->data==x) return 1;
    if(root->data>x) searchInBST(root->left , x);
    else searchInBST(root->right , x);
}
// tc , o(n) , when node is not present , or iss maxi or mini , else avg is(logn) , sc also same
