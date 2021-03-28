class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> maxx(nums);
        vector<int> minn(nums);
        for (int i = 1; i < nums.size(); i++) {
            maxx[i] = max(maxx[i - 1] * nums[i], max(minn[i - 1] * nums[i], nums[i]));
            minn[i] = min(minn[i - 1] * nums[i], min(maxx[i - 1] * nums[i], nums[i]));
        }
        return *max_element(maxx.begin(), maxx.end());
    }
};