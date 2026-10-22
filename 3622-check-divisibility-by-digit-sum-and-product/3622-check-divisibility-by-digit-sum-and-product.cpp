class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int mul = 1;
        int rem = 0;
        while (n > 0) {
            rem = n % 10;
            n = n / 10;
            sum += rem;
            mul *= rem;
        }
        int i_sum = sum + mul;
        if (num % i_sum == 0) {
            return true;
        }
        return false;
    }
};