class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i = 0; i<n; i++) {
            if(10<=nums[i]&&99>=nums[i]) {
                count++;
            }
            else if(1000<=nums[i]&&9999>=nums[i]||nums[i]==100000) {
                count++;
            }
        }
        return count;
    }
};