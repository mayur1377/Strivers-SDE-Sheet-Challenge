#include <bits/stdc++.h> 
void help(string &s , vector<string>&ans , int i , int n)
{
    if(i>=n)
    {
        ans.push_back(s);
        return ;
    }
    for(int x=i ; x<s.size() ; x++)
    {
        swap(s[i] , s[x]);
        help(s , ans , i+1 , n);
        swap(s[i] , s[x]);
    }
    
}
vector<string> findPermutations(string &s) {
    vector<string>ans;
    help(s , ans  , 0 , s.length());
    return ans;
}

// tc : o(2n) , sc(o(n))
