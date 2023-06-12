#include <bits/stdc++.h> 
void help(vector<int>&v , vector<int>temp, vector<vector<int>>&ans , int i)
{
    if(i==v.size())
    {
        ans.push_back(temp);
        return;
    }
    help(v , temp , ans , i+1);
    temp.push_back(v[i]);
    help(v, temp , ans , i+1);
    temp.pop_back();
}
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>>ans;
    vector<int>temp;
    help(v, temp , ans , 0);
    return ans;
    //Write your code here
}
