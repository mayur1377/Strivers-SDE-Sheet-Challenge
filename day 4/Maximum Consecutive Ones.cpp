int longestSubSeg(vector<int> &nums , int n, int k){
    // Write your code here.
    int i=0;
    int j=0;
    int ans=0;
    int zerocount=0;
    int maxi=0;
    for(int i=0 ; i<n ;i++)
    {
        if(nums[i]==0)
        {
            zerocount++;
        }
        if(zerocount>k)
        {
            while(zerocount>k)
            {
                if(nums[j]==0) zerocount--;
                j++;
            }
        }
        else ans=max(ans , i-j);
    }
    return ans+1;
}
// , gotta work on this typa qns
