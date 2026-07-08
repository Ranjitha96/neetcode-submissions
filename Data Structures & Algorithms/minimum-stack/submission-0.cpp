class MinStack {
public:
    stack<int> valStack;
    stack<int> minStack;
    int currmin = 0;
    MinStack() {
        
    } 
    void push(int val) {
        valStack.push(val); 
        if( !minStack.empty())
        {
            int ele = minStack.top();
            ele = min(ele,val);
            minStack.push(ele);
        }
        else
            minStack.push(val);
    }
    
    void pop() {
        if(!valStack.empty())
            valStack.pop(); 
        if(!minStack.empty())
            minStack.pop(); 
    }
    
    int top() {
        return valStack.top(); 
    }
    
    int getMin() {
        return minStack.top();
           
    }
};
