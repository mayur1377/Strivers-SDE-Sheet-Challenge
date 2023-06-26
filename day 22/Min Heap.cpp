#include <bits/stdc++.h> 

vector<int> minHeap(int n, vector<vector<int>>& q) {
    priority_queue<int, vector<int>, greater<int>> p;
    vector<int> result;

    for (auto i : q) {
        if (i[0] == 0) {
            p.push(i[1]);
        } else {
            result.push_back(p.top());
            p.pop();
        }
    }

    return result;
}
