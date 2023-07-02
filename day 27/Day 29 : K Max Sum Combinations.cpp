#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
    priority_queue<pair<int,pair<int,int> >> pq;
    set<pair<int,int>> s;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    pq.push({a[n - 1] + b[n - 1], {n - 1, n - 1}});
    s.insert({n - 1, n - 1});
    vector<int> ans;
    while(k--){
        auto top = pq.top();
        pq.pop();
        ans.push_back(top.first);
        int L = top.second.first;
        int R = top.second.second;
        while(L>0 && R>0 && s.find({L-1,R})==s.end()){
                  pq.push({a[L - 1] + b[R], {L - 1, R}});
                  s.insert({L - 1, R});
        }
        while(L>0 && R>0 && s.find({L,R-1})==s.end()){
                  pq.push({a[L] + b[R - 1], {L, R - 1}});
                  s.insert({L, R - 1});
        }
    }
    return ans;
}
