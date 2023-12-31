 class MyStack {
public:
 queue<int> qq;
    MyStack() {
        
    }
    
    void push(int x) {
        qq.push(x);
        for(int i=0;i<qq.size()-1;i++){
            qq.push(qq.front());
            qq.pop();
        }
        
    }
    
    int pop() {
        int r=qq.front();
        qq.pop();
        return r;
    }
    
    int top() {
        return qq.front();
    }
    
    bool empty() {
        if(qq.size()==0){
            return true;
        }
        return false;
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