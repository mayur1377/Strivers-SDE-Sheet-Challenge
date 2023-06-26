#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
priority_queue<int>maxi;
priority_queue<int , vector<int> , greater<int>>mini;
vector<int>ans;
for(auto i : arr)
{
	maxi.push(i);
	mini.push(maxi.top());
	maxi.pop();
	if(mini.size()>maxi.size())
	{
		maxi.push(mini.top());
		mini.pop();
	}
	if(maxi.size()>mini.size()) ans.push_back(maxi.top());
	else ans.push_back((maxi.top()+mini.top())/2);
}
return ans;
}
