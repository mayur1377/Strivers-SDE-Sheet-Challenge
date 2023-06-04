#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	int count=0;
	int maxi=0;
	for(int i=0 ; i<n ; i++)
	{
		if(count==0)
		{
			count=1;
			maxi=arr[i];
			count++;
		}
		else if(maxi==arr[i])
		{
			count++;
		}
		else count--;
	}
	int freq=0;
	for(int i=0 ; i<n ; i++)
	{
		if(maxi==arr[i]) freq++;
	}
	if(freq>n/2) return maxi;
	return -1;
}
// tc : o(n) sc:o(1) , better than hashing
