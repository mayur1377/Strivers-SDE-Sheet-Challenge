#include <bits/stdc++.h> 
bool isdivided(vector<int> positions , int n ,  int c,int mid)
{
    int rmcnt=positions[0];
    int player=1;
    for(int i=0;i<n;i++)
    {
      if(positions[i]-rmcnt>=mid)
      {
          player++;
          if(player==c)
          {
              return true;
          }
      rmcnt=positions[i];
      }
    }
    return false;
}

int chessTournament(vector<int> positions , int n ,  int c){
    sort(positions.begin(),positions.end());
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,positions[i]);
    }
    int ans=-1;
    int s=1;
    int e=maxi;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(isdivided(positions,n,c,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}
