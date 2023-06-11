#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
	stack<int>s;
	for(int i=0 ; i<n ; i++) s.push(i);
	while(s.size()!=1)
	{
		int x=s.top();
		s.pop();
		int y=s.top();
		s.pop();
		if(knows(x , y)) s.push(y);
		else s.push(x);
	}
	int ans=s.top();
	for(int i=0; i<n ; i++)
	{
		if(i!=ans) if(knows(ans , i)) return -1;
		if(i!=ans) if(!knows(i , ans)) return -1;

	}
	// for(int i=0; i<n ; i++)
	// {
		// if(i!=ans) if(knows(ans , i)) return -1;
	// }
	return ans;

}
