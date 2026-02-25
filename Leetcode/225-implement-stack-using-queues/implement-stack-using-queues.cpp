class MyStack {
public:
    vector<int> arr;
    MyStack() {
    }
    
    void push(int x) {
        arr.push_back(x);
    }
    
    int pop() {
        int data = arr.back();
        arr.pop_back();
        return data;
    }
    
    int top() {
        return arr.back();
    }
    
    bool empty() {
        return arr.empty();
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