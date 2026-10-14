class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int appear = 0;
        for (int i = 0; i < n; i++) {
                while (nums[i] > 0) {
                    int rem = nums[i] % 10;
                    nums[i] /= 10;
                    if (rem == digit) {
                        appear += 1;
                    }
                }
            }
        return appear;
    }
};