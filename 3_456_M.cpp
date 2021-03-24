class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        //单调栈 stk来保存下标
        vector<int> stk = { 0 };
        vector<int> leftMin = { nums[0] };
        for (int i = 0; i < n; i++) {
            while (!stk.empty() && nums[stk.back()] <= nums[i]) {
                stk.pop_back();
            }
            if (!stk.empty() && leftMin[stk.back()] < nums[i]) {
                return true;
            }
            stk.push_back(i);
            leftMin.push_back(min(leftMin.back(), nums[i]));
        }
        return false;
    }
};
