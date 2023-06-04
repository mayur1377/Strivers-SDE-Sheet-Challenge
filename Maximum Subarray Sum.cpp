#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int ans=0;
    long long int sum=0;
    for(int i=0 ; i<n; i++)
    {
        sum+=arr[i];
        ans=max(ans , sum);
        if(sum<0) sum=0;
    }
    return ans;
}

// tc : o(n) , sc : o(n);
// bf approach , find all the subarrays and their sum , return max  
// tc for that will be o(n^2 log (n)) , for sorting the whole thing
// can optimise it by maybe using a pq or something
