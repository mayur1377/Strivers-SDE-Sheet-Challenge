#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
    // Write your code here.
    vector<int>ans;
    sort(nums.begin() , nums.end());
    for(int i=0  ; i <n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                int temp=nums[i]+nums[j]+nums[k]+nums[l];
                if(temp==target) 
                {
                    string y="Yes";
                    return y;
                } else if (temp > target) {
                  l--;
                } else
                  k++;
            }
        }
    }
    string x="No";
    return x;
}
