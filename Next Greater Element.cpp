#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &nums, int n) {
stack<int>s;
vector<int>ans(n , -1);
for(int i=0  ;i<n ; i++)
{
    while(s.size() and nums[s.top()]<nums[i])
    {
        ans[s.top()]=nums[i];
        s.pop();
    }
    s.push(i);
}
return ans;
}
// tc: o(n) , sc:0(n);
// bf would be something like keep two loops and find the nge for each element
// optiised approach would be to store the numbers in a stack and keep comparing
// the top element of a stack to which even greater number is found
