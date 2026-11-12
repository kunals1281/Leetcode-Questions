class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_p = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int n1 = nums[i] - 1;
                int n2 = nums[j] - 1;
                int p = n1 * n2;

                max_p = max(max_p, p);
            }
        }
        return max_p;
    }
};