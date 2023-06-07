vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    if(root==NULL) return ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    bool rot=true;
    while(q.size())
    {
        int n=q.size();
        vector<int>temp(n);
        for(int i=0  ;i<n ; i++)
        {
            auto *curr=q.front();
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
            int ind=(rot)?i:(n-1-i);
            temp[ind]=curr->data;
        }
        ans.insert(ans.end() , temp.begin() , temp.end());
        rot=!rot;
    }
    return ans;
}
