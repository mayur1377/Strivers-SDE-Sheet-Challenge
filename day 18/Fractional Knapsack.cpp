#include<bits/stdc++.h>
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    vector<pair<double,int>>vp;
    for(int i=0;i<n;i++){
        double value=items[i].second;
        double weight=items[i].first;
        vp.push_back({value/weight,i});
    }
    sort(vp.begin(),vp.end());
         double val=0;
         for(int i=n-1;i>=0;i--)
         {
             int index=vp[i].second;
             if(items[index].first<w){
                 w=w-items[index].first;
                 val=val+items[index].second;
             }
             else{
                 val=val+(vp[i].first*w);
                 break;
             }
         }
         
         return val;
}
