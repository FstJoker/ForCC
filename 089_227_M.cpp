class Solution {
public:
	int calculate(string s) {
		int i = 0;
		return parseExpr(s, i);
	}
	int parseExpr(const string& s, int& i) {
		char op = '+';
		long left = 0, right = 0;
		while (i < s.length()) {
			if (s[i] != ' ') {
				long n = parseNum(s, i);
				switch (op) {
				case '+': left += right; right = n; break;
				case '-': left += right; right = -n; break;
				case '*': right *= n; break;
				case '/': right /= n; break;
				}
				if (i < s.length()) {
					op = s[i];
				}
			}
			++i;
		}
		return left + right;
	}
	long parseNum(const string& s, int& i) {
		long n = 0;
		while (i < s.length() && isdigit(s[i])) {
			n = 10 * n + (s[i++] - '0');
		}
		return n;
	}
};