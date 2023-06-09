#include <bits/stdc++.h> 
class Queue {
    int p;
    vector<int>nums;
    int f;
public:
    Queue() {
        // Implement the Constructor
        p=0;
        f=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(f>(p-1))return 1;
        return 0;
    }

    void enqueue(int data) {
        nums.push_back(data);
        p++;
        // Implement the enqueue() function
    }

    int dequeue() {
        if(f<=p-1) return nums[f++];
        else return -1;
        // Implement the dequeue() function
    }

    int front() {
        if(f<=p-1) return nums[f];
        return -1;
    }
};
