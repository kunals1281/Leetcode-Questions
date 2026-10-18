class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int close = INT_MAX;

        for(int i = 0; i < n; i++) {
            int original = nums[i]; 
            if(nums[i] < 0) {
                nums[i] *= -1; 
            }
            
            if (nums[i] < abs(close)) {
                close = original;
            }
           
            else if (nums[i] == abs(close) && original > close) {
                close = original;
            }
        }

        return close;
    }
};
