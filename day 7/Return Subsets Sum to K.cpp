void help(vector<int>&nums , int sum, int k , vector<vector<int>>&ans , vector<int>&temp , int i)
{
    if(i==nums.size())
    {
        if(sum==k)
        {
            ans.push_back(temp);
        }
        return ;
    }
    help(nums, sum , k , ans ,temp ,  i+1);
    temp.push_back(nums[i]);
    // if(sum+nums[i]<=k)
    // {
        help(nums , sum+nums[i] , k , ans , temp , i+1);
    // }
    temp.pop_back();
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>temp;
    help(arr , 0 , k, ans , temp , 0);
    return ans;
}
