 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int ans=0;
   for(int i=0 ; i<heights.size() ; i++)
   {
     int curr=heights[i];
     int count=1;
     int x=i-1;
     while(x>=0 and heights[x]>=curr)
     {
       x--;
       count++;
     }
     x=i+1;
     while(x<heights.size() and curr<=heights[x])
     {
       x++;
       count++;
     }
    int temp=count*curr;
    ans=max(ans , temp);
    while(i<heights.size()-1 and heights[i+1]==curr) i++;
   }
   return ans;
 }
