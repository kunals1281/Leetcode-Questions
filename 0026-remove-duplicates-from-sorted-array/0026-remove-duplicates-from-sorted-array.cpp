class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int n = nums.size();
        vector<int> a;

        a.push_back(nums[0]);

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                continue;
            } else {
                a.push_back(nums[i + 1]);
            }
        }

        for (int i = 0; i < a.size(); i++) {
            nums[i] = a[i];
        }

        return a.size();
    }
};
