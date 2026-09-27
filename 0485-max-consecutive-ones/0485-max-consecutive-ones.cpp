class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0;
        int current_ones = 0;
        
        for (int num : nums) {
            if (num == 1) {
                current_ones++;
                max_ones = max(max_ones, current_ones);
            } else {
                current_ones = 0; 
            }
        }
        
        return max_ones;
    }
};
