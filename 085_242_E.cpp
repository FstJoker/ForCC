class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.length() != t.length()) {
			return false;
		}
		vector<int> counts(26, 0);
		for (int i = 0; i < s.length(); ++i) {
			++counts[s[i] - 'a'];
			--counts[t[i] - 'a'];
		}
		for (int i = 0; i < 26; ++i) {
			if (counts[i]) {
				return false;
			}
		}
		return true;
	}
};