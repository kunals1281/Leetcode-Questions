class Solution {
public:
    bool validDigit(int n, int x) {
        if (n < 10 && n == x) {
            return false;
        }
        int count = 0;
        int rem = 0;
        int f_digit = 0;
        while (n > 0) {
            rem = n % 10;
            n = n / 10;
            if (rem == x) {
                count++;
            }
            f_digit = rem;
        }
        if (count > 0 && f_digit != x) {
            return true;
        }
        return false;
    }
};