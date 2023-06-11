#include <bits/stdc++.h> 
void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    queue<BinaryTreeNode<int>*>q;
    if(root==NULL) return ;
    q.push(root);
    while(q.size())
    {
        int n=q.size();
        vector<BinaryTreeNode<int>*>temp;
        for(int i=0 ; i<n ; i++)
        {
            auto curr=q.front();
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right)q.push(curr->right);
            temp.push_back(curr);
        }
        for(int i=0 ; i<temp.size()-1 ; i++)
        {
            auto x=temp[i];
            auto y=temp[i+1];
            x->next=y;
        }
    }

}
