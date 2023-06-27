#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    vector<int>ans;
    deque<int>p;
    int i=0;
    int j=0;
    while(j<nums.size())
    {
        while(p.size() and nums[j]>nums[p.back()]) p.pop_back();
        p.push_back(j);

        if(j-i+1==k)
        {
            ///windown here
            ans.push_back(nums[p.front()]);
            if(nums[i]==nums[p.front()]) p.pop_front();
            i++;
            j++;
            //NEXT WINDOW
        }
        else
        {
            j++;
        }
    }
    return ans;
    
}
