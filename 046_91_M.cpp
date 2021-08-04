class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if (n == 0) return 0;
        int prev = s[0] - '0';
        if (!prev) return 0;
        if (n == 1) return 1;
        vector<int> dp(n + 1, 1);
        for (int i = 2; i <= n; ++i) {
            int cur = s[i - 1] - '0';
            if ((prev == 0 || prev > 2) && cur == 0) {
                return 0;
            }
            if ((prev < 2 && prev > 0) || prev == 2 && cur < 7) {
                if (cur) {
                    dp[i] = dp[i - 2] + dp[i - 1];
                }
                else {
                    dp[i] = dp[i - 2];
                }
            }
            else {
                dp[i] = dp[i - 1];
            }
            prev = cur;
        }
        return dp[n];
    }
};