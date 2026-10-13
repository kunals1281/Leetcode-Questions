class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        int m = n * 2;
        vector<int> ans(m);
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[m - i - 1] = nums[i];
        }
        return ans;
    }
};