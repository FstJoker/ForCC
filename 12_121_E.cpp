class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res;
        vector<int> stk;
        prices.emplace_back(-1);
        for (int i = 0; i < prices.size(); i++) {
            while (!stk.empty() && prices[i] < stk.back()) {
                res = max(res, stk.back() - stk.front());
                stk.pop_back();
            }
            stk.emplace_back(prices[i]);
        }
        return res;
    }
};