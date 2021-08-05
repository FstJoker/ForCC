class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0, buy = INT_MIN;
        for (int i = 0; i < prices.size(); ++i) {
            buy = max(buy, -prices[i]);
            sell = max(sell, buy + prices[i]);
        }
        return sell;
    }
};