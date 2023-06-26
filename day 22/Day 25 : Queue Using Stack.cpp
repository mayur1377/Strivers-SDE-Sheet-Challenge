#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int>s1 , s2;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        while(s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(s2.size())
        {
            s1.push(s2.top());
            s2.pop();
        }
        // Implement the enqueue() function.
    }

    int deQueue() {
        if(s1.empty()) return -1;
        else{
            int x=s1.top();
            s1.pop();
            return x;
        }
        // Implement the dequeue() function.
    }

    int peek() {
        if(s1.empty())
        {
            return -1;
        }
        return s1.top();
        // Implement the peek() function here.
    }

    bool isEmpty() {
        if(s1.empty()) return true;
        return false;
        // Implement the isEmpty() function here.
    }
};
