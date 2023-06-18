#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    //  Write your code here.
    set<string>s;
    for(int i=0 ; i<word.length() ; i++)
    {
        for(int j=1 ; j<=word.length()-i ; j++)
        {
            s.insert(word.substr(i  , j));
        }
    }
    return s.size();
}
