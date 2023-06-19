#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    vector<int> dis(vertices, INT_MAX);
    vector<pair<int, int>> adjList[vertices];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; // first min heap
    pq.push({0, 0});
    dis[0] = 0;
    for(auto ele : vec){
        adjList[ele[0]].push_back({ele[1], ele[2]});
        adjList[ele[1]].push_back({ele[0], ele[2]});
    }
    while(!pq.empty()){
        pair<int, int> node = pq.top();
        pq.pop();
        vector<pair<int, int>> nodes = adjList[node.second];
        for(auto ele: nodes){
            int ndis = node.first + ele.second;
            if(ndis < dis[ele.first]){
                dis[ele.first] = ndis;
                pq.push({ndis, ele.first});
            }
        }
    }
    return dis;
}
