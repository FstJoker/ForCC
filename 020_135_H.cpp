class Solution {
public:
    int candy(vector<int>& ratings) {
        // Ì°ÐÄËã·¨ 
        int size = ratings.size();
        int res = 0;
        vector<int> numb(size, 1);
        for (int i = 1; i < size; i++) {
            if (ratings[i] > ratings[i - 1]) {
                numb[i] = numb[i - 1] + 1;
            }
        }
        for (int i = size - 1; i > 0; --i) {
            if (ratings[i] < ratings[i - 1]) {
                numb[i - 1] = max(numb[i - 1], numb[i] + 1);
            }
        }
        for (int i = 0; i < numb.size(); ++i) {
            res += numb[i];
        }
        return res;
    }
};