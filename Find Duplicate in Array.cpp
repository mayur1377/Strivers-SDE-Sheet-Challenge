#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	int slow=nums[0];
	int fast=nums[0];
	do{
		slow=nums[slow];
		fast=nums[nums[fast]];
	}while(slow!=fast);
	fast=nums[0];
	while(slow!=fast)
	{
		slow=nums[slow];
		fast=nums[fast];
	}
	return slow;
}
// tc: o(n) , space complexityhas been imporved when compared to the hashing thing
