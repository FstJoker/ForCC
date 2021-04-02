class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int MAX = amount + 1;
        vector<int> f(amount + 1, MAX);
        int n = (int)coins.size();
        f[0] = 0;
        int i, j;
        for(i = 1; i <= amount; ++i){
            for(j = 0; j <= n; ++j){
                if(i >= coins[j] ){
                    f[i] = min(f[i - coins[j]] + 1, f[i]);
                }
            }
        }
        if(f[amount] > amount){
            f[amount] = -1;
        }
        return f[amount];
    }
};