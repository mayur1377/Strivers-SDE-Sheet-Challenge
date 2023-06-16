#include <bits/stdc++.h> 
class Kthlargest {
public:
    int temp;
    priority_queue<int,vector<int> , greater<int>>p;
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here. 
       temp=k;
       for(auto i : arr)
       {
           p.push(i);
           if(p.size()>temp) p.pop();
       }
       
    }

    void add(int num) {
        p.push(num);
        if(p.size()>temp) p.pop();
        // Write your code here.
    }

    int getKthLargest() {
        return p.top();
       // Write your code here.
    }

};
