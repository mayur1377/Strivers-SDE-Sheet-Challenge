#include<bits/stdc++.h>
// int help(string s , string t , int i , int j , vector<vector<int>>&dp)
// {
//     if(i<0) return j;
//     if(j<0) return i;
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(s[i]==t[j])
//     {
//         return dp[i][j]=help(s , t ,i-1 , j-1 , dp);
//     }
//     return dp[i][j]=1+min(help(s , t , i-1 , j , dp) , min (help(s , t , i , j-1 , dp) ,help(s , t , i-1 , j-1 , dp)));
// }
int editDistance(string s, string t)
{
// vector<vector<int>>dp(s.length()+1 , vector<int>(t.length()+1 , -1));
// return help(s , t , s.length()-1 , t.length()-1 , dp)+1;
        int m = s.size(), n = t.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) {
            dp[i][0] = i;
        }
        for (int j = 1; j <= n; j++) {
            dp[0][j] = j;
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
                }
            }
        }
        return dp[m][n];
}
