#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
	set<vector<int>>s;
	sort(nums.begin() , nums.end());
	vector<vector<int>>ans;
	for(int i=0 ; i<n ; i++)
	{
		int j=i+1;
		int k=n-1;
		while(j<k)
		{
			int temp=nums[i]+nums[j]+nums[k];
			if(temp==K)
			{
				s.insert({nums[i], nums[j] , nums[k]});
				j++;
				k--;
			}
			else if(temp>K)
			{
				k--;
			}
			else j++;
		}
	}
	for(auto i : s) ans.push_back(i);
	sort(ans.begin() , ans.end());
	return ans;

}
