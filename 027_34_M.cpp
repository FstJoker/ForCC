class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		if (nums.empty()) {
			return vector<int>{-1, -1};
		}
		// copy
		// ¶þ·Ö
		int lower = lower_bound(nums, target);
		int upper = upper_bound(nums, target) - 1;
		if (lower == nums.size() || nums[lower] != target) {
			return vector<int>{-1, -1};
		}
		return vector<int>{lower, upper};
	}
	int lower_bound(vector<int>& nums, int target) {
		int l = 0, r = nums.size(), mid;
		while (l < r) {
			mid = (l + r) / 2;
			if (nums[mid] >= target) {
				r = mid;
			}
			else {
				l = mid + 1;
			}
		}
		return l;
	}
	int upper_bound(vector<int>& nums, int target) {
		int l = 0, r = nums.size(), mid;
		while (l < r) {
			mid = (l + r) / 2;
			if (nums[mid] > target) {
				r = mid;
			}
			else {
				l = mid + 1;
			}
		}
		return l;
	}
};