bool help(vector<int>&visited , vector<int>adj[] , int curr , int prev)
{
    visited[curr]=1;

    for(auto i : adj[curr])
    {
        if(visited[i]==0)
        {
            if(help(visited , adj , i , curr)) return true;
        }
        else if(visited[i]==1 and i!=prev) return true;
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int>adj[n+1];
    for(int i=0 ; i<m ; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int>visited(n+1 , 0);
    for(int i=1 ; i<=n;  i++)
    {
        if(visited[i]==0)
        {
            if(help(visited , adj , i , -1)) return "Yes";
        }
    }
    return "No";


}
