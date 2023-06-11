#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int>ans;
    int x=(arr.size())/3;
    unordered_map<int , int>m;
    for(auto i : arr)
    {
        m[i]++;
        if(m[i]>x)
        {
            ans.push_back(i);
            m[i]=INT_MIN;
        }
    }
    return ans;


}
