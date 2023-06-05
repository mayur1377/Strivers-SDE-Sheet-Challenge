void help(int** &arr , int i , int j , int n , int m)
{
   if(min(i , j)<0 or i>=n or j>=m ) return ;
   if(arr[i][j]==0) return ;
   arr[i][j]=0;
   help(arr , i+1 , j , n , m);
   help(arr , i-1 , j , n , m);
   help(arr , i , j+1 , n , m);
   help(arr , i , j-1 , n , m);
   help(arr , i+1 , j+1 , n , m);
   help(arr , i-1 , j-1 , n , m);
   help(arr , i+1 , j-1 , n , m);
   help(arr , i-1 , j+1 , n , m);
}
int getTotalIslands(int** arr, int n, int m)
{
   int ans=0;
   for(int i=0 ; i<n ; i++)
   {
      for(int j=0 ; j<m ; j++)
      {
         if(arr[i][j]==1)
         {
            ans++;
            help(arr , i , j , n , m);
         }
      }
   }

   return ans;
}

// tc , sc , o(m*n)
