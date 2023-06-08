#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size();
  int maxi=0;
  for(int i=0 ; i<n ; i++)
  {
    int curr=0;
    for(int j=i ; j<n ; j++)
    {
      curr+=arr[j];
      if(curr==0) maxi=max(maxi , j-i+1);
    }
  }
  return maxi;

}
