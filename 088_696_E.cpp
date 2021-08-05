class Solution {
public:
    int countBinarySubstrings(string s) {
        int pre = 0, cur = 1, count = 0;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1]) {
                ++cur;
            }
            else {
                pre = cur;
                cur = 1;
            }
            if (pre >= cur) {
                ++count;
            }
        }
        return count;
    }
};