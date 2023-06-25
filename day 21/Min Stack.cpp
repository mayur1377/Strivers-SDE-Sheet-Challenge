#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> st;
    int minValue;
    void getMin(stack<int> &st,int& minimum){
        if(st.empty()){
            return;
        }
        int ele = st.top();
        st.pop();
        if(ele < minimum){
            minimum = ele;
        }
        getMin(st,minimum);
        st.push(ele);
        return;
    }
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
            minValue = 100000;
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            if(st.empty()){
                minValue = num;
                st.push(num);
                return;
            }
            if(num<minValue){
                minValue = num;
            }
            st.push(num);
            return;
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
            if(st.empty()){
                return -1;
            }
            int element = st.top();
            st.pop();
            if(element == minValue){
                int mini = 100001;
                getMin(st,mini);
                minValue = mini;
                return element;
            }else{
                return element;
            }
            
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
            
            if(st.empty()){
                return -1;
            }
            return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
            if(st.empty()){
                return -1;
            }
            return minValue;
		}
};
