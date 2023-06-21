#include <bits/stdc++.h> 
void help(stack<int>&s , int x)
{
	if(s.size()==0 or (s.size() and s.top()<x))
	{
		s.push(x);
		return ;
	}

	int n=s.top();
	s.pop();
	help(s , x);
	s.push(n);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.size()==0) return ;

	int x=stack.top();
	stack.pop();

	sortStack(stack);

	help(stack , x);
}
