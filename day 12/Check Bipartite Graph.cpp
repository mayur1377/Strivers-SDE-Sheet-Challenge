#include<bits/stdc++.h>
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	vector<int>adj[edges.size()];
	queue<int>q;
	vector<int>color(edges.size() ,-1 );
	for(int i=0 ; i<edges.size() ; i++)
	{
		vector<int>temp=edges[i];
		for(int j=0 ; j<temp.size() ; j++)
		{
                  if (temp[j]) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                  }
                }
	}
	q.push(0);
	color[0]=0;
	while(q.size())
	{
		int curr=q.front();
		q.pop();
		for(auto i : adj[curr])
		{
			if(color[i]==-1)
			{
				color[i]=!color[curr];
				q.push(i);
			}
			else if(color[i]==color[curr]) return 0;
		}
	}
	return 1;


}
