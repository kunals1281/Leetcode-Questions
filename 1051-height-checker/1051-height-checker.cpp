class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> real_h = heights;
        int n = heights.size();
        int count = 0;

        sort(real_h.begin(), real_h.end());

        for (int i = 0; i < n; i++) {
            if (real_h[i] != heights[i]) {
                count++;
            }
        }

        return count;
    }
};