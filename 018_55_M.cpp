class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        bool f[n];
        f[0] = true;
        for(int j = 1; j < n; ++j){
            f[j] = false;
            for(int i = 0; i < j; ++i){
                if(f[i] && i + nums[i] >= j){
                    f[j] = true;
                    break;
                }
            }
        }
        return f[n - 1]; 
    }
};