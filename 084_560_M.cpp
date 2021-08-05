class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, psum = 0;
        unordered_map<int, int> hashmap;
        hashmap[0] = 1;
        for (int i : nums) {
            psum += i;
            count += hashmap[psum - k];
            ++hashmap[psum];
        }
        return count;
    }
};