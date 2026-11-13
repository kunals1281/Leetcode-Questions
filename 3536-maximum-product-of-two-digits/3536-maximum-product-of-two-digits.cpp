class Solution {
public:
    int maxProduct(int n) {
        int rem = 0;
        vector<int> ans;
        while (n > 0) {
            rem = n % 10;
            ans.push_back(rem);
            n/=10;
        }
        int no = ans.size();
        int max_p = 0;
        for (int i = 0; i < no - 1; i++) {
            for (int j = i + 1; j < no; j++) {
                int p = ans[i] * ans[j];
                max_p = max(max_p, p);
            }
        }
        return max_p;
    }
};