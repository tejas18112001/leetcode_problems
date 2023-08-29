class MyStack {
public:
    
    queue<int>q ;
    
    void Push() {
        for(int i = 0 ; i<q.size()-1 ; i++) {
            q.push(q.front()) ;
            q.pop() ;
        }
    }
    
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x) ;
        Push() ;
    }
    
    int pop() {
        if(q.empty() == true)
            return -1 ;
        int num = q.front() ;
        q.pop() ;
        return num ;
    }
    
    int top() {
        return q.front() ;
    }
    
    bool empty() {
        return q.empty() ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */