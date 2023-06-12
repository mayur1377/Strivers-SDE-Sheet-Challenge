#include <bits/stdc++.h> 
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    map<int , vector<int>>m;
    vector<int>ans;
    if(root==NULL) return ans;
    queue<pair<TreeNode<int>* ,int>>q;
    q.push({root , 0});
    m[0].push_back(root->data);
    while(q.size())
    {
            auto curr=q.front();
            q.pop();
            auto node=curr.first;
            auto d=curr.second;
            if(node->left) 
            {
                q.push({node->left , d-1});
                m[d-1].push_back(node->left->data);
            }
            if(node->right)
            {
              q.push({node->right, d + 1});
              m[d+1].push_back(node->right->data);
            }
    }
    for(auto i : m)
    {
        vector<int>temp=i.second;
        if(temp.size()) for(auto x : temp) ans.push_back(x);
    }
    return ans;
    //    Write your code here.
}
