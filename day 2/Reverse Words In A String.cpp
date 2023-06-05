string reverseString(string &s){
	string ans="";
	string temp="";
	for(int i=s.length()-1 ; i>=0 ; i--)
	{
		while(i>=0 and s[i]==' ') i--;
		 temp="";
		while(i>=0 and s[i]!=' ')
		{
			temp+=s[i];
			i--;
		}
		if(temp.size())
		{
			reverse(temp.begin() , temp.end());
			ans+=temp;
			ans+=" ";
		}
		temp="";
	}
	if(temp.size())
		{
			reverse(temp.begin() , temp.end());
			ans+=temp;
		}
	while(ans[ans.size()-1]==' ') ans.pop_back();
	return ans;
}
// big o of n , sc o(n)
