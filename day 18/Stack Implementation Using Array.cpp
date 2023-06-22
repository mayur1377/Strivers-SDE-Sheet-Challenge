#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    int *arr;
    int t;
    int size;
    Stack(int capacity) {
        // Write your code here.
        arr=new int[capacity];
        t=-1;
        size=capacity;
    }

    void push(int num) {
        if(isFull()) return ;
        t++;
        arr[t]=num;
        // Write your code here.
    }

    int pop() {
        if(isEmpty()) return -1;
        return arr[t--];
        // Write your code here.
    }
    
    int top() {
        if(isEmpty()) return -1;
        return arr[t];
        // Write your code here.
    }
    
    int isEmpty() {
        return t==-1;
        // Write your code here.
    }
    
    int isFull() {
        return (t-1)==size;
        // Write your code here.
    }
    
};
