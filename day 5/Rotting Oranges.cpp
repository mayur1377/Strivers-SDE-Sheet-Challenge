#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    int ans=0;
    queue<vector<int>>q;
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(grid[i][j]==2)
            {
                q.push({i , j ,0});
            }
            else if(grid[i][j]==1)
            {
                count++;
            }
        }
    }
    if(q.size()==0) return 0;
    int x[4] = {0,0,1,-1};
    int y[4] = {1,-1,0,0};
    while(q.size())
    {
        vector<int>temp=q.front();
        int i=temp[0];
        int j=temp[1];
        int t=temp[2];
        q.pop();
        ans=max(ans , t);
        for(int d=0 ; d<4 ; d++)
        {
            int r=i+x[d];
            int c=j+y[d];
            if(min(r , c)>=0 and r<n and c<m and grid[r][c]==1)
            {
                q.push({r , c , t+1});
                grid[r][c]=0;
                count--;
            }
        }
    }
    if(count) return -1;
    return ans;
}
