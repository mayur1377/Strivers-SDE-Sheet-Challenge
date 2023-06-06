int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int count=0;
	for(int i=0; i<n ; i++)
	{
		int curr=arr[i];
		count++;
		while(i<n and curr==arr[i]) i++;
		i--;
	}
	return count;
}
