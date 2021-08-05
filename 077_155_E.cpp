class MinStack {
	stack<int> s, min_s;
public:
	MinStack() {}
	void push(int x) {
		s.push(x);
		if (min_s.empty() || min_s.top() >= x) {
			min_s.push(x);
		}
	}
	void pop() {
		if (!min_s.empty() && min_s.top() == s.top()) {
			min_s.pop();
		}
		s.pop();
	}
	int top() {
		return s.top();
	}
	int getMin() {
		return min_s.top();
	}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */