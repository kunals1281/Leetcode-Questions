class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int fi = nums[0];
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (fi == nums[i]) {
                fi++;
            } else {
                ans.push_back(fi);
                fi++;
                i--;
            }
        }
        return ans;
    }
};