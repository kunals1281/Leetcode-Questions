class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start =0, end = 0, mid, ans;
        int n = weights.size();
        if (days>n) {
            return -1;
        }
        for(int i = 0; i < n; i++) {
            if ( start < weights[i]) {
                start = weights[i];
            }
            end = end + weights[i];
        }
        while (start<= end) {
            mid = start + (end - start )/2;
            int order = 0;
            int count = 1;
            for(int i = 0; i<n; i++) {
                order = order + weights[i];
                if(order>mid) {
                    count++;
                    order = weights[i];
                }
            }
            if(count <= days) {
                ans = mid;
                end = mid -1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};