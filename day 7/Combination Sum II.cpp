#include<bits/stdc++.h>
void help(vector<int>nums , int k  , int i  , vector<int>temp , vector<vector<int>>&ans)
{
    if(k==0)
    {
        ans.push_back(temp);
    }
    if(i==nums.size()) return ;
    if(nums[i]>k) return ;
    temp.push_back(nums[i]);
    help(nums , k-nums[i] , i+1 , temp , ans);
    temp.pop_back();
    int x=nums[i];
    while(i<nums.size() and x==nums[i]) i++;
    help(nums , k , i , temp , ans);
}
  
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
vector<vector<int>>ans;
sort(arr.begin() , arr.end());
vector<int>temp;
help(arr , target , 0 , temp , ans);
return ans;
}
