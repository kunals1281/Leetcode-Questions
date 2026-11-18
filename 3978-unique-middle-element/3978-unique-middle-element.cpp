class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start +(end-start)/2;
        if(n==1) {
            return nums[0];
        }
        int p = nums[mid];
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (p == nums[i]) {
                count++;
            }
        }

        if (count >= 2) {
            return false;
        }
        return true;
    }
};