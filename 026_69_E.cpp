class Solution {
public:
	int mySqrt(int a) {
		if (a == 0) return a;
		int l = 1, r = a, mid, sqrt;
		while (l <= r) {
			mid = l + (r - l) / 2;
			sqrt = a / mid;
			if (sqrt == mid) {
				return mid;
			}
			else if (mid > sqrt) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		return r;
	}
};