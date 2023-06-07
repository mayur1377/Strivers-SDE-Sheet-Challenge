#include <bits/stdc++.h> 
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL) return 0;
    int ans=0;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(q.size())
    {
        int n=q.size();
        ans=max(ans , n);
        while(n--)
        {
            auto curr=q.front();
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
    }
    return ans;
}
