#include <bits/stdc++.h> 
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int>ans;
    if(root==NULL) return ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(q.size())
    {
        int n=q.size();
        for(int i=0  ;i<n ; i++)
        {
            auto *curr=q.front();
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
            ans.push_back(curr->val);
        }
    }
    return ans;
}
