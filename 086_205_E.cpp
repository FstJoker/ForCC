class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> s_first_index(256, 0), t_first_index(256, 0);
        for (int i = 0; i < s.length(); ++i) {
            if (s_first_index[s[i]] != t_first_index[t[i]]) {
                return false;
            }
            s_first_index[s[i]] = t_first_index[t[i]] = i + 1;
        }
        return true;
    }
};