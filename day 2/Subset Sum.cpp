#include <bits/stdc++.h> 
void help(vector<int>&nums , vector<int>&temp , vector<int>&ans , int i , int n)
{
    if(i==n)
    {
        int sum=0;
        sum=accumulate(temp.begin() , temp.end() , 0);
        ans.push_back(sum);
        return ;
    }
    help(nums , temp , ans , i+1, n);
    temp.push_back(nums[i]);
    help(nums , temp , ans , i+1 , n);
    temp.pop_back();
}
vector<int> subsetSum(vector<int> &nums)
{
    // Write your code here.
    vector<int>ans;
    vector<int>temp;
    help(nums , temp , ans , 0 , nums.size());
    sort(ans.begin() , ans.end());
    return ans;
}
//tc : o(2n) , sc: o(2n +n) , 2n for the ans , and n for temp
//
