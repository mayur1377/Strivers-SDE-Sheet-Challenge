#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
 int low=0;
    int high=n-1;
    long long ans=0;
    while(low!=high){
        if(low+1==high){
            if(arr[low]>arr[high]){
                ans++;
            }
            high=n-1;
            low++;
        }
        if(arr[low]>arr[high]){
            ans++;
            high--;
        }
        else{
            high--;
        }
    }
    return ans;
}
