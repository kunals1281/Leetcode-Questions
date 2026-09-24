class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int c_positive = 0;
        int c_negative = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                continue;
            } else if (nums[i] < 0) {
                c_negative++;
            } else {
                c_positive++;
            }
        }
        int ans = max(c_negative, c_positive);
        return ans;
    }
};