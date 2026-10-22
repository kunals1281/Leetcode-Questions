class Solution {
public:
    int subtractProductAndSum(int n) {
        int mult = 1;
        int sum = 0;
        int rem = 0;
        int ans = 0;
        while (n > 0) {
            rem = n % 10;
            n = n / 10;
            sum += rem;
            mult *= rem;
        }
        return mult - sum;
    }
};