class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q;
    void push(int x) {
        q.push(x);
        int n=q.size();
        for(int i=1;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        int t1=q.front();
        q.pop();
        return t1;
        
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
