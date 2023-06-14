#include <bits/stdc++.h> 

using namespace std;

vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
    vector<int> ans;
    vector<set<int>> adj(vertex);

    for (auto i : edges) {
        adj[i.first].insert(i.second);
        adj[i.second].insert(i.first);
    }
    // sort(adj.begin() , adj.end());
    vector<bool> visited(vertex, false);
    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            queue<int> q;
            q.push(i);
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                if (visited[node]) continue;
                visited[node] = true;
                ans.push_back(node);
                for (auto j : adj[node]) {
                    if (!visited[j]) {
                        q.push(j);
                    }
                }
            }
        }
    }
    // sort(ans.begin() , ans.end());
    return ans;
}
