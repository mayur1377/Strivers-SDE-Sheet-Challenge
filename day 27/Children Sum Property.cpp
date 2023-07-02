int bfs(BinaryTreeNode < int > * node){
    if(node==NULL){
        return 0;
    }
    if(node->left==NULL and node->right==NULL) 
    {   node->data=1000000;
        return 1000000;}
    else
    {node->data=bfs(node->left)+bfs(node->right);}
    return node->data;
}
void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    int x=bfs(root);
}  
