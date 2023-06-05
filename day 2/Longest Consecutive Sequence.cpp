#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.
    unordered_set<int>m;
    for(auto i : nums) m.insert(i);
    int maxi=0;
    for(int i=0 ; i<nums.size() ; i++)
    {
        if(m.find(nums[i]-1)!=m.end()) continue;
        else
        {
            int count=0;
            int curr=nums[i];
            while(m.find(curr)!=m.end())
            {
                count++;
                m.erase(curr);
                curr++;
            }
            maxi=max(maxi , count);
        }
    }
    return maxi;
}
