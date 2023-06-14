#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int>adj[v];
    for(auto i : edges)
    {
        adj[i[0]].push_back(i[1]);
    }
        vector<int> indeg(v,0);
        vector<int> ans;
       for(int i=0;i<v;i++)
       {
           for(auto it : adj[i])
           {
               indeg[it]++;
           }
       }
       
       queue<int> q;
       for(int i=0;i<v;i++)
       {
           if(indeg[i]==0)
           q.push(i);
       }
       
       while(!q.empty())
       {
           int x = q.front();
           q.pop();
           ans.push_back(x);
           
           for(int it : adj[x]){
           indeg[it]--;
           if(indeg[it]==0) q.push(it);
           }
       }
       return ans;
}
