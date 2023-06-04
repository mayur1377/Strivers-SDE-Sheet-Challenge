#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{

   int z=0;
   int t=n-1;
   int mid=0;
   while(mid<=t)
   {
      if(arr[mid]==0)
      {
         swap(arr[mid] , arr[z]);
         z++;
         mid++;
      }
      else if(arr[mid]==2)
      {
         swap(arr[mid] , arr[t]);
         t--;
      }
      else mid++;
   }
}
// sc: 0(1)  , tc: o(n)
