class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> n;
    stack<int> m;
    MinStack() {
    }

    void push(int x) {
        n.push(x);
        if (m.empty() || x < m.top()) {
            m.push(x);
        }
    }

    void pop() {
        if (n.top() == m.top()) {
            m.pop();
        }
        n.pop();
    }

    int top() {
        return n.top();
    }

    int min() {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */