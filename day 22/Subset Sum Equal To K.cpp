#include<bits/stdc++.h>
bool solve(int n,int k,vector<int>&arr,vector<vector<int>>&dp)
{    for(int i=0;i<=n;i++)dp[i][0]=1;    
     for(int j=1;j<=k;j++)dp[0][j]=0;        
    for(int i=1;i<=n;i++)    
    {        
        for(int j=1;j<=k;j++)        
        {            
             if(arr[i-1]<=j) dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];            
             else   dp[i][j]=dp[i-1][j];        
        }    
    }    return dp[n][k];     
} 
bool subsetSumToK(int n, int k, vector<int> &arr) 
{    // Write your code here.    
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));    
    return solve(n,k,arr,dp);     
}
