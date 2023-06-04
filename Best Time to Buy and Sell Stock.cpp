#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
  int mini=INT_MAX;
  int ans=INT_MIN;
  for(auto i : prices)
  {
      mini=min(mini , i);
      ans=max(ans , i-mini);
  }
  return ans;
}
// tc: 0(n) , sc:0(1);
