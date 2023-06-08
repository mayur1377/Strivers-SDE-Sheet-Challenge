int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	vector<int>dp(n,0);
    for(int i=0;i<n;i++)
    {
        dp[i]=rack[i];
    }
    int ans=dp[0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(rack[i]>rack[j])
            {
                dp[i]=max(dp[i],rack[i]+dp[j]);

            }
        }
        ans=max(ans,dp[i]);
    }
    return ans;

}
