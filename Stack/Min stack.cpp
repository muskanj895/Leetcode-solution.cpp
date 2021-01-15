class MinStack {
public:
    vector<int> min_stack;
        vector<int> stack;
    /** initialize your data structure here. */
    MinStack() {
        
        
    }
   // stack<int> min_stack;
    
    void push(int x) {
        int current_min =x;
        if(!min_stack.empty())
        {
            current_min = min(min_stack[min_stack.size()-1],x);
        }
        min_stack.push_back(current_min);
        stack.push_back(x);          
        
        
    }
    
    void pop() {
        min_stack.pop_back();
        stack.pop_back();
        
        
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    int getMin() {
        return min_stack[min_stack.size()-1];
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
