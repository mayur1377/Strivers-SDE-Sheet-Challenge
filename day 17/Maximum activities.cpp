#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n=start.size();
    vector<pair<int, int>>nums(n);
    for(int i=0 ; i<n; i++)
    {
        nums[i].first=finish[i];
        nums[i].second=start[i];
    }
    sort(nums.begin() , nums.end());
    int ans=1;
    int curr=nums[0].first;
    for(int i=1 ; i<n ; i++)
    {
        if(nums[i].second>=curr)
        {
            ans++;
            curr=nums[i].first;
        }
    }
    return ans;

}
