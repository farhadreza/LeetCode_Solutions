class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    vector<int> min_stack;
    
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        
        if(min_stack.size()==0 || x<=min_stack.back())
        {
            min_stack.push_back(x);
        }
    
    }
    
    void pop() {
     
        if(!min_stack.empty())
           { 
                 if(st.top()==min_stack.back())
                 {
                  min_stack.pop_back();
                 }
           }
             
        st.pop(); 
            
  }
    
    int top() {
          return st.top();
   
    }
    
    int getMin() {
       
          return min_stack.back();
        
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