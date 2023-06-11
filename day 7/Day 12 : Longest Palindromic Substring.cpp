int help(string s , int l , int r)
{
    // if(s=="" or l>r) return 0;
    while(l>=0 and r<s.length() and s[l]==s[r])
    {
        l--;
        r++;
    }
    return r-l-1;
}
string longestPalinSubstring(string s)
{
int len=0;
int start=0;
for(int i=0 ; i<s.length() ; i++)
{
    int l1=help(s , i  , i );
    int l2=help(s , i , i+1);
    int ans=max(l1, l2);
    if(ans>len)
    {
        len=ans;
        start=i-(ans-1)/2;
    }
}
        return s.substr(start , len);
}
