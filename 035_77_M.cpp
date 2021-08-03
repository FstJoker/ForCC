class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> comb(k, 0);
        int count = 0;
        backtracking(ans, comb, count, 1, n, k);
        return ans;
    }
    // »¹ÊÇ»ØËÝ
    void backtracking(vector<vector<int>>& ans, vector<int>& comb, int& count, int
        pos, int n, int k) {
        if (count == k) {
            ans.push_back(comb);
            return;
        }
        for (int i = pos; i <= n; ++i) {
            comb[count++] = i; 
            backtracking(ans, comb, count, i + 1, n, k);
            --count;  
        }
    }
};