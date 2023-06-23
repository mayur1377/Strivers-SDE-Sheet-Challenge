#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
vector<long>left;
vector<long>right;
long m=0;
for(int i=0 ; i<n ; i++)
{
    m=max(m , arr[i]);
    left.push_back(m);
}
m=0;
for(int i=n-1 ; i>=0 ; i--)
{
    m=max(m , arr[i]);
    right.push_back(m);
}
reverse(right.begin() , right.end());
// for(auto i : left) cout<<i<<" ";
// cout<<endl;
// for(auto i : right) cout<<i<<" ";
long  ans=0;
for(int i=0 ; i<n ; i++)
{
    ans+=min(left[i] , right[i])-arr[i];
}
        return ans;
}
