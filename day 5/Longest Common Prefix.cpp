#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans="";
    sort(arr.begin() , arr.end());
    int i=0;
    int j=0;
    string  x=arr[0];
    string  y=arr[arr.size()-1];
    while(i<x.length() and j<y.length() and x[i]==y[j])
    {
        ans+=x[i];
        i++;
        j++;
    }
    return ans;
}


