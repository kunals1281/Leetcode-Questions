class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int digit_sum = 0;
        int rem = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] > 9) {
                while (nums[i] > 0) {
                    rem = nums[i] % 10;
                    nums[i] = nums[i] / 10;
                    digit_sum += rem;
                }
            } else {
                digit_sum += nums[i];
            }
        }
        return sum - digit_sum;
    }
};