#include "iostream"
#include "cstdio"
using namespace std;
int n, stk[10000], top;
int main() {
	cin >> n;
	while (n--) {
		int t;
		scanf("%d", &t);//缓冲区
		while (top && t <= stk[top]) top--;
		if (!top) cout << -1 << " ";
		else cout << stk[top] << " ";
		stk[++top] = t;
	}
	return 0;
}
