class Solution {
public:
    long long removeZeros(long long n) {
        if (n <= 9 && n > 0) {
            return n;
        }
        long long rem = 0;
        long long mul = 1;
        long long ans = 0;
        while (n > 0) {
            rem = n % 10;
            n = n / 10;
            if (rem != 0) {
                ans = ans + rem * mul;
                mul *= 10;
            }
        }
        return ans;
    }
};