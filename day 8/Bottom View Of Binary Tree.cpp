#include <bits/stdc++.h> 
vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int>ans;
    if(root==NULL) return ans;
    queue<pair<BinaryTreeNode<int>* , int>>q;
    q.push({root , 0});
    map<int , int>m;
    m[0]=root->data;
    while(q.size())
    {
        auto curr=q.front();
        auto node=curr.first;
        auto d=curr.second;
        q.pop();
        if(node->left)
        {
            q.push({node->left , d-1 });
            m[d-1]=node->left->data;
        }
        if(node->right)
        {
            q.push({node->right , d+1});
            m[d+1]=node->right->data;
        }
    }
    for(auto i : m)
    {
        ans.push_back(i.second);
    }
    return ans;
}
