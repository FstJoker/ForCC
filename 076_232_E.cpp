class MyQueue {
	stack<int> in, out;
public:
	MyQueue() {}
	void push(int x) {
		in.push(x);
	}
	int pop() {
		in2out();
		int x = out.top();
		out.pop();
		return x;
	}
	int peek() {
		in2out();
		return out.top();
	}
	void in2out() {
		if (out.empty()) {
			while (!in.empty()) {
				int x = in.top();
				in.pop();
				out.push(x);
			}
		}
	}
	bool empty() {
		return in.empty() && out.empty();
	}
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */