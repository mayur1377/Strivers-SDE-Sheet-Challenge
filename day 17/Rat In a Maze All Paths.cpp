#include <bits/stdc++.h> 
void help(vector<vector<int>>&maze , vector<int>temp , int i , int j , vector<vector<int>>&ans , int&n)
{
    if(min(i , j)<0 or i>=n or j>=n ) return ;
    if(maze[i][j]==0 or maze[i][j]==2) return ;
    if(i==n-1 and j==n-1)
    {
        temp[n*n-1]=1;
        ans.push_back(temp);
        return ;
    }
    maze[i][j]=2;
    temp[(n*i)+j]=1;
    help(maze , temp , i+1 , j , ans , n);
    help(maze , temp , i-1 , j , ans , n);
    help(maze , temp , i , j+1 , ans , n);
    help(maze , temp , i , j-1 , ans , n);
    temp[(n*i)+j]=0;
    maze[i][j]=1;

}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  vector<vector<int>>ans;
  vector<int>temp(n*n , 0);
  help(maze , temp , 0 , 0 , ans , n);
  return ans;
}
