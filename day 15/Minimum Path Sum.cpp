#include <bits/stdc++.h> 
// int help(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
//     if(i == 0 and j == 0)return grid[0][0];
//     if(i < 0 or j < 0) return 1e9;
//     if(dp[i][j] != -1) return dp[i][j];
//     int up =  grid[i][j] + help(i-1,j,grid,dp);
//     int left = grid[i][j] + help(i, j-1, grid,dp);
//     return dp[i][j] = min(up,left);
// }
int minSumPath(vector<vector<int>> &grid) {
   int n = grid.size();
    int m = grid[0].size();
 vector<vector<int>> vec(n,vector<int>(m,-1));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0) vec[i][j] = grid[i][j];
            else{
                int x  = grid[i][j]; 
                int var1 = 100000007, var2 = 100000007;

                if(i>0) var1 = vec[i-1][j];
                if(j>0) var2 = vec[i][j-1];

                vec[i][j] = min(x+var1,x+var2); 
 
            }
        }
    }

    return vec[n-1][m-1];

}
