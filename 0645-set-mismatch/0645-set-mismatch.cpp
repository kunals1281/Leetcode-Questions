class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;
        int duplicate = 0;

        for (int i = 0; i < n; i++) {
            actual_sum += nums[i];

            if (i < n - 1 && nums[i] == nums[i + 1]) {
                duplicate = nums[i];
            }
        }

        int missing = expected_sum - (actual_sum - duplicate);

        return {duplicate, missing};
    }
};
