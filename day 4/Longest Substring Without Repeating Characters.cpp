#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int ans=0;
    int j=0;
    unordered_map<int , int>m;
    for(int i=0 ; i<input.size() ; i++)
    {
        m[input[i]]++;
        if(m[input[i]]>1)
        {
            while(m[input[i]]>1)
            {
                m[input[j]]--;
                j++;
            }
        }
        ans=max(ans , i-j+1);
    }
    return ans;
}
