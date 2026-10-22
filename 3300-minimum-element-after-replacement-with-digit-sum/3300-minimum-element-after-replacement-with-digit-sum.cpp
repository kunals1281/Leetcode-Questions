class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX;
        for (int i = 0; i < n; i++) {
            int rem = 0;
            int ans = 0;
            while (nums[i] > 0) {
                rem = nums[i] % 10;
                ans = ans + rem;
                nums[i] = nums[i] / 10;
            }

            if (min > ans) {
                min = ans;
            }
        }
        return min;
    }
};