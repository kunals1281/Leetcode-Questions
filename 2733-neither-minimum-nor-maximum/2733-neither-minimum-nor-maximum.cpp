class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return -1;
        }
        int max = 0;
        int s_max = 0;
        for (int i = 0; i < n; i++) {
            if (max < nums[i]) {
                s_max = max;
                max = nums[i];
            } else if (nums[i] <= max && nums[i] >= s_max) {
                s_max = nums[i];
            }
        }
        return s_max;
    }
};