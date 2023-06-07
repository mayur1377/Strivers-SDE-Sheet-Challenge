#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    vector<int>nums={1 , 2 , 5 ,10 , 20 , 50 , 100 , 500 , 1000};
    int count=0;
    int i=nums.size()-1;
    while(amount>0)
    {
        if(nums[i]<=amount)
        {
            // cout<<nums[i]<<" ";
            count++;
            amount-=nums[i];
        }
        else i--;
    }
    return count;
}
// big o of n , sc , o(9)
