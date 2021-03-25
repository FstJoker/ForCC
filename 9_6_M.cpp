class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        string res;
        int len = s.length();
        int Bigestcon = 2 * numRows - 2;
        for (int i = 0; i < numRows; i++) {
            int tmp = i;
            int reacon = i * 2;
            while (tmp < len) {
                res += s[tmp];
                reacon = Bigestcon - reacon;
                if (i == 0 || i == numRows - 1) {
                    tmp += Bigestcon;
                }
                else {
                    tmp += reacon;
                }
            }
        }
        return res;
    }
};