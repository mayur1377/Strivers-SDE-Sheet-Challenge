#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    unordered_map<int , int>m , n;
    for(auto i : str1) m[i]++;
    for(auto i : str2) n[i]++;
    return m==n;
}
