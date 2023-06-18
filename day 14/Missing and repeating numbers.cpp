#include <bits/stdc++.h>
    pair<int, int> missingAndRepeating(vector<int> &arr, int n)
    {
        pair<int,int>p;
    set<int>s1;
    for(int i=0;i<n;i++)
    {
        s1.insert(arr[i]);
    }
    int actualsum=0;
    for(int i=1;i<=n;i++)
    {
        actualsum+=i;
    }
    int realsum=0;
    for(int i=0;i<n;i++)
    {
        realsum+=arr[i];
    }
    int sum=0;
    for(auto it:s1)
    {
      sum=sum+it;
    }
    int repeat=actualsum-sum;
    int miss=realsum-sum;
    p.first=repeat;
    p.second=miss;
    return p;
    }


	
