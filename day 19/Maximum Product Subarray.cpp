#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
    int ans=INT_MIN,prod=1;
    for(int i=0;i<n;i++)
    {
        prod*=arr[i];
        ans=max(ans,prod);
        if(prod==0)
        {
            prod=1;
        }
    }
    prod=1;
    for(int i=n-1;i>=0;i--)
    {
        prod*=arr[i];
        ans=max(ans,prod);
        if(prod==0)
        {
            prod=1;
        }
    }
    return ans;
}
