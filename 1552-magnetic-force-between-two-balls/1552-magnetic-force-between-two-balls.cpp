class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());
        int start = 1;
        int end = position[n-1]-position[0];
        
        int mid, ans=0;

        while(start<=end) {
            mid = start + (end - start)/2;
            int force = position[0];
            int count = 1;
            for(int i = 1; i<n; i++) {
                if(position[i] - force >= mid) {
                    count++;
                    force = position[i];
                }

                }
                if(count<m) {
                    end = mid -1;
                }
                else {
                    ans = mid;
                    start = mid + 1;
                }
            }
            return ans;
        
    }
};