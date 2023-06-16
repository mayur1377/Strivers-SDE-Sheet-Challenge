#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  vector<int>adj[n+1];
  vector<int>in(n+1 , 0);
  for(auto i : edges)
  {
    adj[i.first].push_back(i.second);
    in[i.second]++;
  }
  queue<int>q;
  for(int i=1 ; i<=n ; i++)
  {
    if(in[i]==0) q.push(i);
  }
  int count=0;
  while(q.size())
  {
    auto curr=q.front();
    q.pop();
    count++;
    for(auto i : adj[curr])
    {
      in[i]--;
      if(in[i]==0) q.push(i);
    }
  }
  if(count==n) return false;
  return true;
}


// topo sort , use that logic , kahns also , it only used for DAG
