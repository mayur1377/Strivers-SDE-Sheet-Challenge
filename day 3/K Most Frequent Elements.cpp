#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<int>ans;
    unordered_map<int , int>m;
    for(auto i : arr)m[i]++;
    priority_queue<pair<int , int>>p;
    for(auto i : m)
    {
        p.push({i.second , i.first});
    }
    for(int i=1 ; i<=k ; i++)
    {
        ans.push_back(p.top().second);
        p.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
