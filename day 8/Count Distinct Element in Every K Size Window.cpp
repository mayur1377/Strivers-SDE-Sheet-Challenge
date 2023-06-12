#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &nums, int k) 
{
    // Write your code here
	vector<int>ans;
    unordered_map<int , int>m;
    int j=0;
    int i=0;
    while(j<nums.size())
    {
        m[nums[j]]++;
        if(j-i+1<k) j++;
        else if(j-i+1==k)
        {
            int x=m.size();
            ans.push_back(x);
            m[nums[i]]--;
            if(m[nums[i]]==0)
            {
                m.erase(nums[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
}
