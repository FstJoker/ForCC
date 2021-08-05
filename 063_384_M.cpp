class Solution {
	vector<int> origin;
public:
	Solution(vector<int> nums) : origin(std::move(nums)) {}
	vector<int> reset() {
		return origin;
	}
	vector<int> shuffle() {
		if (origin.empty()) return {};
		vector<int> shuffled(origin);
		int n = origin.size();
		for (int i = n - 1; i >= 0; --i) {
			swap(shuffled[i], shuffled[rand() % (i + 1)]);
		}
		return shuffled;
	}
};