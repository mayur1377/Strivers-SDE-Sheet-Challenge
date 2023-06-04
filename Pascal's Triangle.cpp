#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>>ans;
    vector<long long int>prev={1};
    ans.push_back(prev);
    for(int i=2 ; i<=n ; i++)
    {
        vector<long long int>temp(i , 0);
        temp[0]=1;
        for(int j=1 ; j<prev.size() ; j++)
        {
          temp[j]=prev[j]+prev[j-1];
        }
        temp[i-1]=1;
        ans.push_back(temp);
        prev=temp;
    }
    return ans;
}

// tc : o(n2);
//  sc : o(n2);
