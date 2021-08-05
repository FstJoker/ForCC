class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> prime(n, true);
        int count = n - 2;
        for (int i = 2; i <= n; ++i) {
            if (prime[i]) {
                for (int j = 2 * i; j < n; j += i) {
                    if (prime[j]) {
                        prime[j] = false;
                        --count;
                    }
                }
            }
        }
        return count;
    }
};