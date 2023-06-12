#include <bits/stdc++.h> 
vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>ans;
    if(root==NULL) return ans;
    map<int , int>m;
    queue<pair<TreeNode<int>* , int>>q;
    q.push({root , 0});
    m[0]=root->val;
    while(q.size())
    {
        auto c=q.front();
        q.pop();
        auto node=c.first;
        auto d=c.second;
        if(node->left) q.push({node->left , d-1});
        if(node->right)q.push({node->right, d+1});
        if(m.find(d)==m.end())
        {
            m[d]=node->val;
        }
    }
    for(auto i : m )ans.push_back(i.second);
    return ans;
}
