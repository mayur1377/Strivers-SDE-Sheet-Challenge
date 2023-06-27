vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	vector<int>ans;
	int n=text.size();
	int m=pattern.size();
	for(int i=0 ; i<=n-m ; i++)
	{
		int flag=1;
		for(int j=0 ; j<m ; j++)
		{
			if(text[i+j]==pattern[j]) continue;
			else{
				flag=0;
				break;
			}
		}
		if(flag) ans.push_back(i+1);
	}
	return ans;
}
