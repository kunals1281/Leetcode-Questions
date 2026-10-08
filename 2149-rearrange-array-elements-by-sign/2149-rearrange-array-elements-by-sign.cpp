class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int p_int = 0;
        int n_int = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result[p_int] = nums[i];
                p_int += 2;
            } else {
                result[n_int] = nums[i];
                n_int += 2;
            }
        }
        return result;
    }
};