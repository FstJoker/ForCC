class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int max_length = 0, n = nums.size();
        if (n <= 1) return n;
        vector<int> dp(n, 1);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            max_length = max(max_length, dp[i]);
        }
        return max_length;
    }
};