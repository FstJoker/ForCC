class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty()) return 0;
        int n = nums.size();
        if (n == 1) return nums[0];
        int pre2 = 0, pre1 = 0, cur;
        for (int i = 0; i < n; ++i) {
            cur = max(pre2 + nums[i], pre1);
            pre2 = pre1;
            pre1 = cur;
        }
        return cur;
    }
};