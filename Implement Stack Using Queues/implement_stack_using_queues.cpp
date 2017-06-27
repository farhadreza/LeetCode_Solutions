class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q;
    
    MyStack() {
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int size=q.size();
        q.push(x);
        int temp;
        for(int i=0;i<size;i++)
        {
            temp=q.front();
            q.pop();
            q.push(temp);
            
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(!q.empty())
        {
            int temp=q.front();
            q.pop(); 
            return temp;
        }
           
        //return NULL;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */