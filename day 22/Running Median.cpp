#include<bits/stdc++.h>
void findMedian(int *nums, int n)
{
    // Write your code here
    priority_queue<int>maxi;
    priority_queue<int , vector<int> , greater<int>>mini;
    for(int i=0 ; i<n ; i++)
    {
        maxi.push(nums[i]);
        mini.push(maxi.top());
        maxi.pop();
        if(mini.size()>maxi.size())
        {
            maxi.push(mini.top());
            mini.pop();
        }
        if(maxi.size()>mini.size()) cout<<maxi.top()<<" ";
        else cout<<(maxi.top()+mini.top())/2<<" ";
    }
}
