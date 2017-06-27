class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> st;
    
    
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack<int> st2;
        int temp;
        while(!st.empty())
        {
            temp=st.top();
            st.pop();
            st2.push(temp);
            
        }
        st.push(x);
        while(!st2.empty())
        {
            temp=st2.top();
            st2.pop();
            st.push(temp);
            
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
       // if(!st.empty())
       // {
            int temp=st.top();
            st.pop(); 
            return temp;
      //  }
        
      //  return 0;
    }
    
    /** Get the front element. */
    int peek() {
        return st.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return st.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */