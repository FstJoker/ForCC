class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); ++i) {
            count += extendSubstrings(s, i, i);
            count += extendSubstrings(s, i, i + 1);
        }
        return count;
    }
    int extendSubstrings(string s, int l, int r) {
        int count = 0;
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            --l;
            ++r;
            ++count;
        }
        return count;
    }
};