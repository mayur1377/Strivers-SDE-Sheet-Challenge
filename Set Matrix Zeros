#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	vector<int> r(n , 0) , c(m , 0);
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			if(matrix[i][j]==0)
			{
				r[i]=1;
				c[j]=1;
			}
		}
	}
	for(int i=0 ;i<n ; i++)
	{
		for(int j=0 ; j<m ; j++)
		{
			if(r[i] or c[j]) matrix[i][j]=0;
		}
	}
}

// tc : o(n*m)
// sc : o(max(n , m)) 
