class Solution {
public:
    int flag;
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        int L = 0, R = n;
        while (L < R) {
            int M = (L + R) / 2;
            if (nums[M] < target) {
                L = M + 1;
            }
            else R = M;
        }
        return L;
    }
};