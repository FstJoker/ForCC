class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res;
        int n = prices.size();
        if(n <= 1){
            return 0;
        }
        int std[n][3];
        std[0][0] = 0;
        std[0][1] = -1*prices[0];
        std[0][2] = 0;
        for(int i = 1; i < n; i++){
            std[i][0] = max(std[i - 1][0], std[i - 1][2]);
            std[i][1] = max(std[i - 1][1], std[i - 1][0] - prices[i]);
            std[i][2] = std[i - 1][1] + prices[i];
        }

        return max(std[n - 1][0], std[n - 1][2]);
    }
};
