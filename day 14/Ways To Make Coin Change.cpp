#include<bits/stdc++.h>
long help(int i  , int n , int *nums , int value , vector<vector<long>>&dp)
{
    if(i>=n) return 0;
    if(value==0) return 1;
    if(dp[i][value]!=-1) return dp[i][value];
    long pick=0;
    long notpick=0;
    if(nums[i]<=value) pick=help(i , n , nums, value-nums[i] , dp);
    notpick=help(i+1 , n , nums , value , dp);
    return dp[i][value]=pick+notpick;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>>dp(n , vector<long>(value+1 , -1));
    return help(0 ,n , denominations ,value ,  dp );   
}
