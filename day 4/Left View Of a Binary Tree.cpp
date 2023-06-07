#include<bits/stdc++.h>
vector<int> getLeftView(TreeNode<int> *root)
{
     //  Write your code here.
    vector<int>ans;
    if(root==NULL) return ans;
    queue<TreeNode<int>*>q;
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
            if(i==0) ans.push_back(curr->data);
        }
    }
    return ans;
}
