class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> min_stack;
	
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        
        if(min_stack.size()==0 || x<=min_stack.top())
        {
            min_stack.push(x);
        }
       
    }
    
    void pop() {
      if(!st.empty())
      {
            int temp=st.top();
            st.pop(); 
            
             
             if(!min_stack.empty())
             { 
                 if(temp==min_stack.top())
                 {
                  min_stack.pop();
                 }
             }
      }
        
    
    
  }
    
    int top() {
        if(!st.empty())
        {
          return st.top();
        }
    }
    
    int getMin() {
      
        return min_stack.top();
       
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */