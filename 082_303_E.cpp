class NumArray {
	vector<int> psum;
public:
	NumArray(vector<int> nums) : psum(nums.size() + 1, 0) {
		partial_sum(nums.begin(), nums.end(), psum.begin() + 1);
	}
	int sumRange(int i, int j) {
		return psum[j + 1] - psum[i];
	}
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */