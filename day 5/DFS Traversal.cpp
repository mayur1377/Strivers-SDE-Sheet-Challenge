void dfs(vector<vector<int>>&adj, vector<int>&temp, vector<bool>&visited , int i)
{
    if(visited[i]) return ;
    visited[i]=true;
    temp.push_back(i);
    for(auto x : adj[i])
    {
        if(!visited[x])
        {
            dfs(adj , temp , visited , x);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>>ans;
    vector<vector<int>>adj(V);
    for(auto i : edges)
    {
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    vector<bool>visited(V , false);
    for(int i=0  ;i<V ;i++)
    {
        if(!visited[i])
        {
            vector<int>temp;
            dfs(adj , temp , visited , i);
            ans.push_back(temp);
        }
    }
    return ans;
}
