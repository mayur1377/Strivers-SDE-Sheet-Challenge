int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at , at+n);
    sort(dt , dt+n);
    int j=1;
    int i=0;
    int ans=1;
    while(j<n)
    {
        if(at[j]>dt[i]) i++;
        else ans++;
        j++;
    }
    return ans;
}
