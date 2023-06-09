#include <bits/stdc++.h> 
class Stack {
	// Define the data members.

    private:
    queue<int>q1 , q2;
    int size;
   public:
    Stack() {
         size=0;
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
        // Implement the getSize() function.
    }

    bool isEmpty() {
        return size==0;
        // Implement the isEmpty() function.
    }

    void push(int element) {
        q2.push(element);
        while(q1.size())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1 , q2);
        size++;
        // Implement the push() function.
    }

    int pop() {
        if(q1.size())
        {
                int x=q1.front();
                q1.pop();
                size--;
                return x;
        }
        return -1;
        // Implement the pop() function.
    }

    int top() {
        if(q1.size()) return q1.front();
        return -1;
        // Implement the top() function.
    }
};
