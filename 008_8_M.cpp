class Solution {
public:
    int myAtoi(string s) {
        int sym = 1, tmp = 0;
        int i = 0;
        while (s[i] == ' ') {
            i++;
        }
        if (s[i] == '+' || s[i] == '-') {
            sym = 1 - 2 * (s[i++] == '-');
        }
        while (s[i] && s[i] >= '0' && s[i] <= '9') {
            if (tmp > INT_MAX / 10 || (tmp == INT_MAX / 10 && s[i] - '0' > 7))
                return sym == 1 ? INT_MAX : INT_MIN;
            tmp = tmp * 10 + (s[i++] - '0');
        }
        return sym * tmp;
    }
};
