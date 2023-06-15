#include <bits/stdc++.h> 
int atoi(string str) {
 int ans=0;
 for(auto i : str)
 {
     if(isdigit(i)) ans=ans*10+(i-'0');
 }
 if(str[0]=='-') ans*=-1;
 return ans;

}
