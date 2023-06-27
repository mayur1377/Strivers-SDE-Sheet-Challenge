#include <bits/stdc++.h> 
bool findPattern(string p, string s)
{
   int m=s.length();
   int n=p.length();
    for(int i=0; i<=(m-n); i++){
        if(s.substr(i, n)==p) return 1;
    }
    return 0;
}
