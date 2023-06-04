bool searchMatrix(vector<vector<int>>& mat, int target) {
int low=0;
int high=mat.size()-1;
while(low<=high)
{
    int mid=(low+high)/2;
    if(mat[mid][0]<=target and mat[mid][mat[mid].size()-1]>=target)
    {
        int x=0;
        int y=mat[mid].size()-1;
        while(x<=y)
        {
            int midi=(x+y)/2;
            if(mat[mid][midi]==target) return true;
            else if(mat[mid][midi]<target) x=midi+1;
            else y=midi-1;
        }
        return false;
    }
    else if(mat[mid][0]<target) low=mid+1;
    else high=mid-1;
}
return 0;
}
// better than 0(nm) 
// time com in binary searc happroach hench overall o(logm + logn)
